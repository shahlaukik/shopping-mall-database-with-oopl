#pragma once
#ifndef MALLBANKACCOUNT_HPP
#define MALLBANKACCOUNT_HPP
#include "./customDataTypes.hpp"
#include <vector>

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

    // declare store and load database as friend functions
    friend void saveDatabase(mallBankAccount &mBankAccount);
    friend void loadDatabase(mallBankAccount &mBankAccount);
};
#endif