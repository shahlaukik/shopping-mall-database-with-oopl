#pragma once
#ifndef MALLBANKACCOUNT_HPP
#define MALLBANKACCOUNT_HPP
#include "./customDataTypes.hpp"

class mallBankAccount {
    private:
    struct bankAccount mallAccount;
    float balance;
    public:
    mallBankAccount(float balance);
    bool withdraw(float amount);
    void deposit(float amount);
    float getBalance();
    void accessMallBankAccount();
};
#endif