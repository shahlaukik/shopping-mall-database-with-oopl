// Finance:
// 1. Accept Payment
// 2. Make payout
// 3. Pay Salary: 1. Specific 2. All

#include "../../include/customDataTypes.hpp"
#include "../../include/mallBankAccount.hpp"
#include "../../include/mallEmployees.hpp"
#include "../../include/payment.hpp"
#include "../../include/payout.hpp"
#include <iostream>
#include <ios> //for <steamsize>
#include <limits> //for numeric_limits
#include <vector>

void acceptPayment(mallBankAccount &acMall, vector<payment> vPayments) {
    system("cls");
    payment tempPayment;
    tempPayment.acceptPayment(acMall);
    vPayments.push_back(tempPayment);
}

void makePayout(mallBankAccount &acMall, vector<payout> vPayouts) {
    system("cls");
    payout tempPayout;
    tempPayout.setPayout();
    vPayouts.push_back(tempPayout);
}

void paySalary(mallBankAccount &acMall, vector<mallEmployees> &vMallEmployees, vector<transaction> &vTransactions) {
    system("cls");
    bool repeat = true;
    while (repeat) {
        char choice;
        cout
            << "\n1    :    TO ALL"
            << "\n2    :    TO SPECIFIC"
            << "\ne    :    EXIT"
            << "\nENTER YOUR CHOICE: ";
        cin >> choice;

        switch (choice) {
        case '1': {
            system("cls");
            float amount;
            typeOfTrxn tempTOT = Out;
            cout << "\nEnter employees salary: ";
            cin >> amount;

            transaction tempTransaction;
            for (auto it = vMallEmployees.begin(); it != vMallEmployees.end(); it++) {
                it->setEmployeeSalary(amount);
                tempTransaction = setTransaction(amount, Out);
                acMall.withdraw(amount);
                vTransactions.push_back(tempTransaction);
            }

            break;
        }

        case '2': {
            system("cls");
            int amount;
            int tempId;
            cout << "\nEnter EmployeeId to pay salary: ";
            cin >> tempId;
            transaction tempTransaction;
            int i = 0;
            for (auto it = vMallEmployees.begin(); it != vMallEmployees.end(); it++) {
                if (tempId == it->returnEmployeeId()) {

                    cout << "\nEnter employees salary: ";
                    cin >> amount;
                    it->setEmployeeSalary(amount);
                    tempTransaction = setTransaction(amount, Out);
                    acMall.withdraw(amount);
                    vTransactions.push_back(tempTransaction);
                }
                break;
            }
        } break;

        case 'e': 
            repeat = false;
            break;

        default:
            cout << "\nIncorrect choice try again !";
            break;
        }

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    }
}

void optionFinance(mallBankAccount &acMall,
                   vector<mallEmployees> &vMallEmployees,
                   vector<transaction> &vTransactions,
                   vector<payout> &vPayouts,
                   vector<payment> &vPayments) {
    system("cls");
    bool repeat = true;
    while (repeat) {
        char choice;
        cout << "\n1    :    ACCEPT PAYMENT"
             << "\n2    :    MAKE PAYOUT"
             << "\n3    :    PAY SALARY"
             << "\ne    :    EXIT"
             << "\nENTER YOUR CHOICE: ";
        cin >> choice;

        switch (choice) {
        case '1':
            acceptPayment(acMall, vPayments);
            break;
        case '2':
            makePayout(acMall, vPayouts);
            break;
        case '3':
            paySalary(acMall, vMallEmployees, vTransactions);
            break;
        case 'e':
            repeat = false;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }

        // continue after user aknowledges
        cout << "\n\nOperation successful" << endl;
        cout << "Press any key to coutinue" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    }
}