#pragma once
#ifndef PAYOUT_HPP
#define PAYOUT_HPP

#include <iostream>
#include "../include/mallBankAccount.hpp"
using namespace std;

class payout {
    protected:// Sensitive info is protected
    int payoutId;
    int invoiceId;
    transaction transaction;
    string description;
    trxnState trxnState;

    public:
    void setPayout(); // take input of all details at once
    void getPayout(); // give output of all details at once
    bool checkPayout(mallBankAccount *acMall, mallBankAccount *acThirdParty);

    // Functions to return details if required

    int returnPayoutId();
    int returnInvoiceId();
    struct transaction returnTransaction();
    string returnDescription();
    enum trxnState returnTrxnState();
};

#endif // PAYOUT_HPP
