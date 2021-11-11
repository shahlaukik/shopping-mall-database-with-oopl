#include "../include/customDataTypes.hpp"
#include <iostream>
#include <ctime>
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
    cout << "Enter date:" << endl;
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
        cout << "Enter gender (Male-0, Female-1): ";
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
}
// Function to print bankAccount details
void getBankAccount(bankAccount bankAccount) {
    cout << "Bank Name: " << bankAccount.bankName << endl;
    cout << "Account Number: " << bankAccount.accountNumber << endl;
    cout << "IFSC: " << bankAccount.ifsc << endl;
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
// Function to take input for type
type setType() {
    type type;
    char temp;
    bool valid = false;
    while (!valid) {
        cout << "Enter type (Directed-D, Contracted-C): ";
        cin >> temp;
        switch (temp) {
        case 'D':
            type = Directed;
            valid = true;
            break;
        case 'M':
            type = Contracted;
            valid = true;
            break;
        default:
            cout << "Enter a valid choice" << endl;
        }
    }
    return type;
}
// Function to print type
void getType(type type) {
    cout << "Type:" << type << endl;
}
// Function to take input for dateOfJoining
dateOfJoining setdateOfJoining() {
    dateOfJoining dateOfJoining;
    cout << "Enter date:" << endl;
    cout << "Enter the day: ";
    cin >> dateOfJoining.day;
    cout << "Enter the month: ";
    cin >> dateOfJoining.month;
    cout << "Enter the year: ";
    cin >> dateOfJoining.year;
    return dateOfJoining;
}
// Function to print dateOfJoining
void getdateOfJoining(dateOfJoining dateOfJoining) {
    cout << "Date: " << dateOfJoining.day << "/" << dateOfJoining.month << "/" << dateOfJoining.year << endl;
}
// Function to take input for Category
category setCategory() {
    category category;
    char temp;
    bool valid = false;
    while (!valid) {
        cout << "Enter type (Full-Time-F, Part-Time-P): ";
        cin >> temp;
        switch (temp) {
        case 'P':
            category = fullTime;
            valid = true;
            break;
        case 'F':
            category = partTime;
            valid = true;
            break;
        default:
            cout << "Enter a valid choice" << endl;
        }
    }
    return category;
}
// Function to print category
void getCatefory(category category) {
    cout << "Category:" << category << endl;
}