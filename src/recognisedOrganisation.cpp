#include "../include/recognisedOrganisation.hpp"
#include <string>

// setDatail function of recognisedOrganisation Class to input all detail at once

void recognisedOrganisation::setDetails() {

    cout << "\nENTER ORGANISATION'S DETAILS:-"
         << "\nEnter Organisation's ID : ";
    cin >> recognisedOrganisationId;

    cout << "Enter Organisation's Name: ";
    cin >> registeredName;

    cout << "Enter Organisation type: ";
    cin >> registeredOrgnisationType;

    cout << "Enter Phone Number: ";
    cin >> phoneNumber;

    cout << "Enter emailId: ";
    cin >> emailId;

    cout << "Enter registrationId: ";
    cin >> registrationId;

    cout << "Enter GST Number: ";
    cin >> gstn;

    registrationAddress = setAddress();
    registrationDate = setDate();
}

// getDetails function of recognisedOrganisation Class to Display all details at once

void recognisedOrganisation::getDetails() {
    cout << endl
         << "ORGANISATION'S DETAILS:- "
         << "\nOrganisation's ID:    "
         << recognisedOrganisationId
         << endl
         << "Organisation's Name:   "
         << registeredName
         << endl
         << "Organisation Type:    "
         << registeredOrgnisationType
         << endl
         << "Phone Number:  "
         << phoneNumber
         << endl
         << "EmailId:   "
         << emailId
         << endl
         << "RegistrationId:    "
         << registrationId
         << endl
         << "GST Number:    "
         << gstn;
    cout << endl;       
    getAddress(registrationAddress);
    cout << endl;
    getDate(registrationDate);
}

// functions to return each data member one at a time

int recognisedOrganisation::returnRecognisedOrganisationId() {
    return recognisedOrganisationId;
}

string recognisedOrganisation::returnRegisteredOrganisationType() {
    return registeredOrgnisationType;
}

string recognisedOrganisation::returnRegisterdName() {
    return registeredName;
}

address recognisedOrganisation::returnRegistrationAddress() {
    return registrationAddress;
}

date recognisedOrganisation::returnDate() {
    return registrationDate;
}

string recognisedOrganisation::returnPhoneNumber() {
    return phoneNumber;
}

string recognisedOrganisation::returnEmailId() {
    return emailId;
}

int recognisedOrganisation::returnRegistrationId() {
    return registrationId;
}

string recognisedOrganisation::returnGstn() {
    return gstn;
}