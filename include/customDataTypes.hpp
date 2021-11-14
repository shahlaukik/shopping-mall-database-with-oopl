#pragma once
#ifndef CUSTOMDATATYPES_HPP
#define CUSTOMDATATYPES_HPP

#include <string>
using namespace std;

// structures and enums

struct address {
    string street;
    string city;
    string state;
    string zip;
};

struct date {
    int month;
    int day;
    int year;
};

struct timeM {
    int hour;
    int minute;
    int second;
};

enum gender {
    Male = 0,
    Female = 1,
};

struct bankAccount {
    string bankName;
    string accountNumber;
    string ifsc;
};

enum typeOfTrxn {
    In = 0,
    Out = 1,
};

enum trxnState {
    Pending = 0,
    Approved = 1,
    Rejected = 2,
};

struct transaction {
    float amount;
    date trxnDate;
    timeM trxnTime;
    typeOfTrxn type;
    string referenceNumber; // checkID or transferID
};

enum category { partTime = 0,
                fullTime = 1 };

enum type { direct = 0,
            contracted = 1 };

// functions for input and output of structs and enums
address setAddress();
void getAddress(address address);

date setDate();
void getDate(date date);

timeM setTime();
void getTime(timeM timeM);

gender setGender();
void getGender(gender gender);

bankAccount setBankAccount();
void getBankAccount(bankAccount bankAccount);

typeOfTrxn setTypeOfTrxn();
void getTypeOfTrxn(typeOfTrxn typeOfTrxn);

trxnState setTrxnState();
void getTrxnState(trxnState trxnState);

transaction setTransaction();
transaction setTransaction(float tempAmount, typeOfTrxn tempTypeOfTrxn);
void getTransaction(transaction transaction);

// Functions to get current date and time
date getCurrentDate();
timeM getCurrentTime();

// Function to randomaly generate a 5 digit ID
int generateID();

category setCategory();
type setType();
void getCategory(category empCategory);
void getType(type empType);

#endif // CUSTOMDATATYPES_HPP