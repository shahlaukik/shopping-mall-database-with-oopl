#pragma once
#ifndef MALLBANKACCOUNT_HPP
#define MALLBANKACCOUNT_HPP
#include "./customDataTypes.hpp"

class mallBankAccount {
    private:
    struct bankAccount mallAccount;
    mallBankAccount(float balance);
    float balance;
    public:
    bool withdraw(float amount);
    void deposit(float amount);
    float getBalance();
};
#endif