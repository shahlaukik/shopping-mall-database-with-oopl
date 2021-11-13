#include "../include/payout.hpp"
#include "../include/customDataTypes.hpp"
#include <string>

// function to input initial values

void payout::setPayout() {
    cout << endl
         << "ENTER PAYOUT DETAILS:-"
         << endl
         << "Enter Invoice No.:  ";
    cin >> invoiceId;

    transaction = setTransaction();

    cout << "Enter Description:  ";
    cin >> description;

    trxnState = setTrxnState();
}

// Function to out details

void payout::getPayout() {
    cout << endl
         << "PAYOUT DETAILS:- "
         << endl
         << "PayoutId:    "
         << payoutId
         << endl
         << "Invoice ID:    "
         << invoiceId
         << endl
         << "Description:   "
         << description
         << endl
         << "Trxn State:    "
         << trxnState;
    getTransaction(transaction);
}

// Function to make payment to a third party

bool payout::checkPayout(mallBankAccount *acMall) {

    float paybleAmount;
    cout << "\nEnter Amount to transfer: ";
    cin >> paybleAmount;

    if ((int)paybleAmount < (int)(*acMall).balance) {
        (*acMall).balance = (*acMall).balance - paybleAmount;

        cout << endl
             << paybleAmount << " IS SUCCESSFULLY TRANSFERED.";
    
        return true;
    } else {
        cout << endl
             << "YOU DON'T HAVE REQUIRED AMMOUNT TO PAY ! ";
        return false;
    }
    acMall->withdraw();

    return false;
}

// Functions to return details if required
int payout::returnPayoutId() {
    return payoutId;
}

int payout::returnInvoiceId() {
    return invoiceId;
}

transaction payout::returnTransaction() {
    return transaction;
}

string payout::returnDescription() {
    return description;
}

trxnState payout::returnTrxnState() {
    return trxnState;
}