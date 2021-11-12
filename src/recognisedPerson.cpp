#include "../include/recognisedPerson.hpp"
#include <string>

// setDatail function of recognisedPerson Class to input all detail at once

void recognisedPerson::setDetails() {

    cout << "\nENTER PERSON'S DETAILS:-"
         << "\nEnter recognised Person's ID : ";
    cin >> recognisedPersonId;

    cout << "Enter recognised Person's Name: ";
    cin >> name;

    cout << "Enter Phone Number: ";
    cin >> phoneNumber;

    cout << "Enter email: ";
    cin >> email;

    cout << "Enter Date of Birth: ";
    birthDate = setDate();

    sex = setGender();
    address = setAddress();
}

// getDetails function of recognisedPerson Class to Display all details at once

void recognisedPerson::getDetails() {
    cout << endl
         << "PERSON'S DETAILS:-"
         << "\nPerson's ID:    "
         << recognisedPersonId
         << endl
         << "Person's Name:   "
         << name
         << endl
         << "Phone Number:    "
         << phoneNumber
         << endl
         << "Email:   "
         << email
         << endl;
    getDate(birthDate);
    cout << endl;
    getGender(sex);
    cout << endl;
    getAddress(address);
}

// functions to return each data member one at a time

int recognisedPerson::returnRecognisedPersonId() {
    return recognisedPersonId;
}

date recognisedPerson::returnDate() {
    return birthDate;
}

string recognisedPerson::returnName() {
    return name;
}

string recognisedPerson::returnPhoneNumber() {
    return phoneNumber;
}

string recognisedPerson::returnEmail() {
    return email;
}

gender recognisedPerson::returnGender() {
    return sex;
}