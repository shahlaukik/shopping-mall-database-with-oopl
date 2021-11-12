#include "../include/shopDetails.hpp"
#include <iostream>
using namespace std;

//defining functions

void propertyDetails::setshopID() {
    cout << "Enter the ID :";
    cin >> shopID;
}

void propertyDetails::setPropertyNumber() {
    cout << "Enter the PropertyNumber :";
    cin >> propertyNumber;
}

void propertyDetails::setFloor() {
    cout << "Enter the Floor Number :";
    cin >> floor;
}

void propertyDetails::setArea() {
    cout << "Enter Property's Area :";
    cin >> area;
}

void propertyDetails::setOwnerRPID() {
    cout << "Enter Owner's RPID :";
    cin >> ownerRPID;
}

void propertyDetails::getOwnerRPID() {
    cout << "OwnerRPID is :" << ownerRPID;
}

void propertyDetails::getDateOfPurchase() {
    cout << "The Date of Purchase :" << dateOfPurchase.day << "/" << dateOfPurchase.month << "/" << dateOfPurchase.year;
}
