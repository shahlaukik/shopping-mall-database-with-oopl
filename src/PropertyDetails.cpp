#include "../include/PropertyDetails.hpp"
#include <iostream>
using namespace std;

//defining functions

void PropertyDetails::setPropertyID() {
    cout << "\nEnter the ID :";
    cin >> PropertyID;
}

void PropertyDetails::setPropertyNumber() {
    cout << "\nEnter the PropertyNumber :";
    cin >> PropertyNumber;
}

void PropertyDetails::setFloor() {
    cout << "\nEnter the Floor Number :";
    cin >> Floor;
}

void PropertyDetails::setArea() {
    cout << "\nEnter Property's Area :";
    cin >> Area;
}

void PropertyDetails::setOwnerRPID() {
    cout << "\nEnter Owner's RPID :";
    cin >> OwnerRPID;
}

void PropertyDetails::getOwnerRPID() {
    cout << "\nOwnerRPID is :" << OwnerRPID;
}

void PropertyDetails::getDateOfPurchase() {
    cout << "\nThe Date of Purchase :" << DateOfPurchase.day << "/" << DateOfPurchase.month << "/" <<DateOfPurchase.year;
}