#include "../include/payout.hpp"
#include "../include/customDataTypes.hpp"
#include "../include/mallBankAccount.hpp"
#include <string>

// function to input initial values

void payout::setPayout(mallBankAccount &acMall) {
    float tempAmount ;
    cout << endl
         << "ENTER PAYOUT DETAILS:-"
         << endl
         << "Enter Invoice No.:  ";
    cin >> invoiceId;
    cout << endl
         << "Enter Amount: ";
    cin >> tempAmount;
    if(tempAmount <= acMall.getBalance()){ 
    transaction = setTransaction(tempAmount, Out);
    cout << "Enter Description:  ";
    cin >> description;
    cout << "Transaction Successful" << endl;
    acMall.withdraw(tempAmount);
    }
    else
    {
        cout << endl
             << "!! Your Balance ammount is not sufficent !!";
    }
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

    if (acMall->withdraw(paybleAmount)) {
        cout << endl
             << paybleAmount << " IS SUCCESSFULLY TRANSFERED.";
        return true;
        
    } else {
        cout << endl
             << "YOU DON'T HAVE REQUIRED AMMOUNT TO PAY ! ";
        return false;
    }
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