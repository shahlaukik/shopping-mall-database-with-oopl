#include "../include/shopDetails.hpp"
#include <iostream>
using namespace std;

//defining functions

void shopDetails::setshopID() {
    cout << "Enter the ID :";
    cin >> shopID;
}

void shopDetails::setPropertyNumber() {
    cout << "Enter the PropertyNumber :";
    cin >> propertyNumber;
}

void shopDetails::setFloor() {
    cout << "Enter the Floor Number :";
    cin >> floor;
}

void shopDetails::setArea() {
    cout << "Enter Property's Area :";
    cin >> area;
}

void shopDetails::setOwnerRPID() {
    cout << "Enter Owner's RPID :";
    cin >> ownerRPID;
}

void shopDetails::getOwnerRPID() {
    cout << "OwnerRPID is :" << ownerRPID;
}

void shopDetails::getDateOfPurchase() {
    cout << "The Date of Purchase :" << dateOfPurchase.day << "/" << dateOfPurchase.month << "/" << dateOfPurchase.year;
}
