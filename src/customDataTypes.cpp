#include "../include/customDataTypes.hpp"
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