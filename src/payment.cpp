#include "../include/payment.hpp"
#include "../include/customDataTypes.hpp"
#include "../include/mallBankAccount.hpp"

#include <iostream>
#include <string.h>
using namespace std;

void payment::acceptPayment(mallBankAccount &mallAccount) {

    int temp;

    cout << "Enter your name: ";
    cin >> paymentFrom;
    paymentState = Pending;
    cout << "Enter the Amount to pay: ";
    cin >> accTransaction.amount;
    cout << "Enter the description of payment: ";
    cin >> description;
    accTransaction.trxnDate = getCurrentDate();
    accTransaction.trxnTime = getCurrentTime();
    cout << "Enter reference number: ";
    cin >> accTransaction.referenceNumber;
    accTransaction.type = In; //In/Out trxn type
    int temp_val;
    temp_val = mallAccount.getBalance();
    temp_val += accTransaction.amount;
    mallAccount.deposit(accTransaction.amount);
    paymentState = Approved;

    cout << "The Transaction is succesfull. here are the Transaction details:\n";
    cout << "Date: " << accTransaction.trxnDate.day << "/" << accTransaction.trxnDate.month << "/" << accTransaction.trxnDate.year << endl;
    cout << "Time: " << accTransaction.trxnTime.hour << "/" << accTransaction.trxnTime.minute << "/" << accTransaction.trxnTime.second << endl;
    cout << "Amount paid for: " << description << endl;
    cout << "ChequeID/ReferenceID: " << accTransaction.referenceNumber << endl;
    cout << "Amount Transferred: " << accTransaction.amount << endl;
    
}