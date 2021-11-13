#pragma once
#ifndef MALLBANKACCOUNT_HPP
#define MALLBANKACCOUNT_HPP
#include "./customDataTypes.hpp"

class mallBankAccount {
    protected:
    public:
    struct bankAccount mallAccount;
    mallBankAccount(float balance);
    float balance;
    void withdraw();
    void deposit();
    float getBalance();
};
#endif