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
    }
    else
    {
        return false;
    }
}

void mallBankAccount::deposit(float amount) {

    balance += amount;
}

float mallBankAccount::getBalance() {
    return balance;
}
