#include "../include/payment.hpp"
#include "../include/customDataTypes.hpp"
#include "../include/mallBankAccount.hpp"

#include <iostream>
#include <string.h>
using namespace std;

void payment::acceptPayment(mallBankAccount mallAccount) {

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
    cout << " choose Mode of transer\n1. Cheque\n2. Transfer\nChoose:  ";
    cin >> temp;

    do {
        if (temp == 1)
            cout << "Enter the cheque ID: ";
        else if (temp == 2)
            cout << "Enter Transfer Reference ID";
        else
            cout << "Given Number is Invalid";
    } while ((temp != 1) || (temp != 2));

    cin >> accTransaction.referenceNumber;
    accTransaction.type = In; //In/Out trxn type
    int temp_val;
    temp_val = mallAccount.getBalance();
    temp_val += accTransaction.amount;
    paymentState = Approved;

    cout << "The Transaction is succesfull. here are the Transaction details:\n";
    cout << "Date: " << accTransaction.trxnDate.day << "/" << accTransaction.trxnDate.month << "/" << accTransaction.trxnDate.year << endl;
    cout << "Time: " << accTransaction.trxnTime.hour << "/" << accTransaction.trxnTime.minute << "/" << accTransaction.trxnTime.second << endl;
    cout << "Amount paid for: " << description;
    cout << "ChequeID/ReferenceID: " << accTransaction.referenceNumber;
    cout << "Amount Transferred: " << accTransaction.amount;
}