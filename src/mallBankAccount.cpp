#include "../include/mallBankAccount.hpp"
#include "../include/customDataTypes.hpp"
#include <iostream>
#include <string.h>
using namespace std;

mallBankAccount::mallBankAccount(float Balance) {
    balance = Balance;
}

bool mallBankAccount::withdraw(float amount) {
    if (balance < amount) {
        balance -= amount;
        return true;
    } else {
        return false;
    }
}

void mallBankAccount::deposit(float amount) {

    balance += amount;
}

float mallBankAccount::getBalance() {
    return balance;
}

void mallBankAccount::accessMallBankAccount() {
    int Password = 12345;
    int tempP;
    cout << "ENTER PASSWORD: ";
    cin >> tempP;
    if (tempP == Password) {
        cout << "\nlogin Successfull";
        bool repeat = true;
        char choice;
        while (choice) {
            cout
                << "\n1    :   DEPOSIT"
                << "\n2    :   WITHDRAW"
                << "\ne    :   EXIT"
                << "\nENTER YOUR CHOICE: ";
            cin >> choice;
        
        switch (choice)
        {
        case '1':
            float amount;
            cout << "\nEnter Amount to Deposit: ";
            cin >> amount;
            deposit(amount);
            break;
        case '2':
            float amount;
            cout << "\nEnter Amount to Withdraw: ";
            cin >> amount;
            deposit(amount);
            break;
        case 'e':
            repeat = false;
            break;
        
        default:
            break;
        }
        }
    }
}
