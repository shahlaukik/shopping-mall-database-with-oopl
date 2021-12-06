#pragma once
#ifndef PAYOUT_HPP
#define PAYOUT_HPP

#include <iostream>
#include "../include/mallBankAccount.hpp"
#include <vector>
using namespace std;

class payout {
    protected:// Sensitive info is protected
    int payoutId;
    int invoiceId;
    transaction transaction;
    string description;
    trxnState trxnState;

    public:
    void setPayout(mallBankAccount &acMall); // take input of all details at once
    void getPayout(); // give output of all details at once
    bool checkPayout(mallBankAccount *acMall);

    // Functions to return details if required

    int returnPayoutId();
    int returnInvoiceId();
    struct transaction returnTransaction();
    string returnDescription();
    enum trxnState returnTrxnState();

    // declare store and load database as friend functions
    friend void saveDatabase(vector<payout> &vPayouts);
    friend void loadDatabase(vector<payout> &vPayouts);
};

#endif // PAYOUT_HPP
