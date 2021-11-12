#include "mallBankAccount.hpp"
#include <iostream>
#include <string.h>
using namespace std;

mallBankAccount::mallBankAccount(float Balance) {
    balance = Balance;
}

void mallBankAccount::withdraw() {

    float withdrawAmount;
    cout << "Enter the Amount to Withdraw: ";
    cin >> withdrawAmount;
    balance -= withdrawAmount;
    cout << "Amount remaining in the Account After withdraw: " << balance;
}

void mallBankAccount::deposit() {

    float depositAmount;
    cout << "Enter the Amount to deposit: ";
    cin >> depositAmount;
    balance += depositAmount;
    cout << "Amount in the Account after deposit: " << balance;
}

float mallBankAccount::getBalance() {
    cout << "The Amount in the Mall Bank Account is: " << balance << "/-";
}
