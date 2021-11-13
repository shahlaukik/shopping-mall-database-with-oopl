#pragma once
#ifndef MALLBANKACCOUNT_HPP
#define MALLBANKACCOUNT_HPP
#include "./customDataTypes.hpp"

class mallBankAccount {
    protected: 
    struct bankAccount mallAccount;
    float balance;
    public:
    mallBankAccount(float balance); 
    void withdraw();
    void deposit();
    float getBalance();
};
#endif