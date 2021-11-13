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
#include <vector>

void acceptPayment(mallBankAccount &acMall) {
    acMall.deposit();
}

void makePayout(mallBankAccount &acMall) {
    acMall.withdraw();
}

void paySalary(mallBankAccount &acMall, vector<mallEmployees> &vMallEmployees, vector<transaction> &vTransactions) {
    int choice;
    cout
        << "\n1    :    TO ALL"
        << "\n2    :    TO SPECIFIC"
        << "\nENTER YOUR CHOICE: ";
    cin >> choice;

    switch (choice) {
    case 1: {
        int amount;
        cout << "\nEnter employees salary: ";
        cin >> amount;

        int i = 0;
        auto itTrxn = vTransactions.begin();
        for (auto it = vMallEmployees.begin(); it != vMallEmployees.end(); it++) {
            itTrxn->amount = amount;
            itTrxn->referenceNumber = rand() % 10000;
            itTrxn->trxnDate = getCurrentDate();
            itTrxn->trxnTime = getCurrentTime();
            itTrxn->type = Out;

            acMall.balance -= amount;
            it->setEmployeeSalary(amount);

            cout << "\n SALARY SUCCESSFULLY PAID TO " << it->returnEmployeeId()
                 << endl;
            getTransaction(vTransactions[i]);

            itTrxn++;
            i++;
        }
        break;
    }

    case 2: {
        int amount;
        int tempId;
        cout << "\nEnter EmployeeId to pay salary: ";
        cin >> tempId;

        int i = 0;
        auto itTrxn = vTransactions.begin();
        for (auto it = vMallEmployees.begin(); it != vMallEmployees.end(); it++) {
            if (tempId == it->returnEmployeeId()) {

                cout << "\nEnter employees salary: ";
                cin >> amount;

                itTrxn->amount = amount;
                itTrxn->referenceNumber = rand() % 10000;
                itTrxn->trxnDate = getCurrentDate();
                itTrxn->trxnTime = getCurrentTime();
                itTrxn->type = Out;

                acMall.balance -= amount;
                it->setEmployeeSalary(amount);

                cout << "\n SALARY SUCCESSFULLY PAID TO " << it->returnEmployeeId()
                     << endl;
                getTransaction(vTransactions[i]);

                itTrxn++;
                i++;
            }
        }
        break;
    }

    break;

    default:
        break;
    }
}

void optionFinance(mallBankAccount &acMall, vector<mallEmployees> &vMallEmployees, vector<transaction> &vTransactions) {
    int choice;
    cout << "\n1    :    ACCEPT PAYMENT"
         << "\n2    :    MAKE PAYOUT"
         << "\n3    :    PAY SALARY"
         << "\nENTER YOUR CHOICE: ";
    cin >> choice;
}