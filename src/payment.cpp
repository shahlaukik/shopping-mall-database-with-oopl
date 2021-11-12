#include "payment.hpp"
#include "../include/customDataTypes.hpp"
#include "mallBankAccount.hpp"
#include <iostream>
#include <string.h>
using namespace std;

void payment::acceptPayment(mallBankAccount mallAccount) {

    accTransaction.trxnID = rand();
    cout << "Enter the Amount to pay: ";
    cin >> accTransaction.amount;
    accTransaction.trxnDate = getCurrentDate();
    accTransaction.trxnTime = getCurrentTime();
    cout << "Enter the cheque ID: ";
    cin >> accTransaction.referenceNumber
               accTransaction.typeofTrxn type = in;
}