#pragma once
#ifndef MALLBANKACCOUNT_H
#define MALLBANKACCOUNT_H
#include "./customDataTypes.hpp"
class mallBankAccount {
    mallBankAccount(float balance);

    protected:
    struct bankAccount mallBankAccount;
    float balance;

    public:
    mallBankAccount(float Balance);
    void withdraw();
    void deposit();
    float getBalance();
};
#endif