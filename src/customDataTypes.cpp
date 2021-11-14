#include "../include/customDataTypes.hpp"
#include <ctime>
#include <iostream>
using namespace std;

// Function to take input for address
address setAddress() {
    address address;
    cout << "Enter address:" << endl;
    cout << "Enter the street: ";
    cin >> address.street;
    cout << "Enter the city: ";
    cin >> address.city;
    cout << "Enter the state: ";
    cin >> address.state;
    cout << "Enter the zip code: ";
    cin >> address.zip;
    return address;
}
// Function to print address
void getAddress(address address) {
    cout << "Address: " << address.street << ", " << address.city << ", " << address.state << " " << address.zip << endl;
}

// Function to take input for date
date setDate() {
    date date;
    cout << "Enter the day: ";
    cin >> date.day;
    cout << "Enter the month: ";
    cin >> date.month;
    cout << "Enter the year: ";
    cin >> date.year;
    return date;
}
// Function to print date
void getDate(date date) {
    cout << "Date: " << date.day << "/" << date.month << "/" << date.year << endl;
}

// Function to take input for time
timeM setTime() {
    timeM time;
    cout << "Enter time:" << endl;
    cout << "Enter the hour: ";
    cin >> time.hour;
    cout << "Enter the minute: ";
    cin >> time.minute;
    cout << "Enter the second: ";
    cin >> time.second;
    return time;
}
// Function to print time
void getTime(timeM timeM) {
    cout << "Time: " << timeM.hour << ":" << timeM.minute << ":" << timeM.second << endl;
}

// Function to take input for gender
gender setGender() {
    gender gender;
    char temp;
    bool valid = false;
    while (!valid) {
        cout << "Enter gender (M/F): ";
        cin >> temp;
        switch (temp) {
        case 'F':
            gender = Female;
            valid = true;
            break;
        case 'M':
            gender = Male;
            valid = true;
            break;
        default:
            cout << "Enter a valid choice" << endl;
        }
    }
    return gender;
}
// Function to print gender
void getGender(gender gender) {
    cout << "Gender:" << gender << endl;
}

// Function to take input for bankAccount
bankAccount setBankAccount() {
    bankAccount bankAccount;
    cout << "Enter bank account details:" << endl;
    cout << "Bank Name: ";
    cin >> bankAccount.bankName;
    cout << "Account Number: ";
    cin >> bankAccount.accountNumber;
    cout << "IFSC: ";
    cin >> bankAccount.ifsc;
    return bankAccount;
}
// Function to print bankAccount details
void getBankAccount(bankAccount bankAccount) {
    cout << "Bank Name: " << bankAccount.bankName << endl;
    cout << "Account Number: " << bankAccount.accountNumber << endl;
    cout << "IFSC: " << bankAccount.ifsc << endl;
}

// Function to take input for type of transaction
typeOfTrxn setTypeOfTrxn() {
    typeOfTrxn typeOfTrxn;
    char temp;
    bool valid = false;
    while (!valid) {
        cout << "Enter type of transaction (Inword(I)/Outword(O)): ";
        cin >> temp;
        switch (temp) {
        case 'I':
            typeOfTrxn = In;
            valid = true;
            break;
        case 'O':
            typeOfTrxn = Out;
            valid = true;
            break;
        default:
            cout << "Enter a valid choice" << endl;
        }
    }
    return typeOfTrxn;
}
// Function to print type of transaction
void getTypeOfTrxn(typeOfTrxn typeOfTrxn) {
    cout << "Type of transaction: " << typeOfTrxn << endl;
}

// Function to take input for transaction state
trxnState setTrxnState() {
    trxnState trxnState;
    char temp;
    bool valid = false;
    while (!valid) {
        cout << "Enter transaction state (Pending(P)/Approved(A)/Rejected(R)): ";
        cin >> temp;
        switch (temp) {
        case 'P':
            trxnState = Pending;
            valid = true;
            break;
        case 'A':
            trxnState = Approved;
            valid = true;
            break;
        case 'R':
            trxnState = Rejected;
            valid = true;
            break;
        default:
            cout << "Enter a valid choice" << endl;
        }
    }
    return trxnState;
}
// Function to print transaction state
void getTrxnState(trxnState trxnState) {
    cout << "Transaction state: " << trxnState << endl;
}

// Function to take input for transaction details
transaction setTransaction() {
    transaction transaction;
    cout << "Enter transaction details:" << endl;
    transaction.trxnDate = getCurrentDate();
    transaction.trxnTime = getCurrentTime();
    cout << "Enter the transaction amount: ";
    cin >> transaction.amount;
    transaction.type = setTypeOfTrxn();
    return transaction;
}
// Overloaded function of setTransaction();
transaction setTransaction(float tempAmount, typeOfTrxn tempTypeOfTrxn) {
    transaction transaction;
    transaction.trxnDate = getCurrentDate();
    transaction.trxnTime = getCurrentTime();
    transaction.amount = tempAmount;
    transaction.type = tempTypeOfTrxn;
    return transaction;
}

// Function to print transaction details
void getTransaction(transaction transaction) {
    cout << "Transaction details:" << endl;
    getDate(transaction.trxnDate);
    getTime(transaction.trxnTime);
    cout << "Amount: " << transaction.amount << endl;
    getTypeOfTrxn(transaction.type);
}

// Function to get current date
date getCurrentDate() {
    date date;
    time_t now = time(0);
    tm *ltm = localtime(&now);
    date.day = ltm->tm_mday;
    date.month = ltm->tm_mon + 1;
    date.year = ltm->tm_year + 1900;
    return date;
}
// Function to get current time
timeM getCurrentTime() {
    timeM timeM;
    time_t now = time(0);
    tm *ltm = localtime(&now);
    timeM.hour = ltm->tm_hour;
    timeM.minute = ltm->tm_min;
    timeM.second = ltm->tm_sec;
    return timeM;
}

// Function to generate a unique 5 digit ID
int generateID() {
    srand(time(0));
    int id = rand() % 99999 + 10000;
    return id;
}