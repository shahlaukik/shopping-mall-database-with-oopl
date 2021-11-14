#pragma once
#ifndef PAYMENT_HPP
#define PAYMENT_HPP

#include "./customDataTypes.hpp"
#include "./mallBankAccount.hpp"
#include "string"
#include <vector>

class payment {
    protected:
    int paymentID;
    string paymentFrom;
    string description;
    struct transaction accTransaction;
    enum trxnState paymentState;

    public:
    void acceptPayment(mallBankAccount &mallAccount);

    // declare store and load database as friend functions
    friend void saveDatabase(vector<payment> &vPayments);
    friend void loadDatabase(vector<payment> &vPayments);
};

#endif