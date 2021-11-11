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
enum type {
    Directed = 0,
    Contracted = 1,
};
struct dateOfJoining {
    int month;
    int day;
    int year;
};
enum category{
    partTime=0,
    fullTime=1,
};
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
type setType();
void getType(type type);
dateOfJoining setdateOfJoining();
void getdateOfJoining(dateOfJoining dateOfJoining);
category setCategory();
void getCategory(category category);
// Functions to get current date and time
date getCurrentDate();
timeM getCurrentTime();

#endif // CUSTOMDATATYPES_HPP