#pragma once
#ifndef PAYMENT_H
#define PAYMENT_H
#include "./customDataTypes.hpp"
#include "./mallBankAccount.hpp"
#include "string"

class payment {
    protected:
    int paymentID;
    string description;
    struct transaction accTransaction;
    enum trxnState paymentState;

    public:
    void acceptPayment(mallBankAccount mallAccount);
};
#endif