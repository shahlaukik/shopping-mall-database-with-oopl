#pragma once
#ifndef PAYMENT_HPP
#define PAYMENT_HPP

#include "./customDataTypes.hpp"
#include "./mallBankAccount.hpp"
#include "string"

class payment {
    protected:
    int paymentID;
    string paymentFrom;
    string description;
    struct transaction accTransaction;
    enum trxnState paymentState;

    public:
    void acceptPayment(mallBankAccount mallAccount);
};

#endif 