#include "../include/shopDetails.hpp"
#include <iostream>
using namespace std;

//defining functions

void shopDetails::setShopID() {
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

void shopDetails::setDateOfPurchase(){
    cout << "Enter Date of Purchase :" << endl;
    cout << "Enter Day :";    cin >> dateOfPurchase.day; 
    cout << "Enter Month :";    cin >> dateOfPurchase.month;
    cout << "Enter Year :";    cin >> dateOfPurchase.year;
}

void shopDetails::getDetails() {
    cout << "Shop ID is :" << shopID << endl;
    cout << "Property Number is :" << propertyNumber << endl;
    cout << "It is on the floor :" << floor << endl;
    cout << "Its area is " << area << " sq. units." << endl;
    cout << "OwnerRPID is :" << ownerRPID << endl;
    cout << "The Date of Purchase :" << dateOfPurchase.day << "/" << dateOfPurchase.month << "/" << dateOfPurchase.year;

}

int shopDetails::returnShopID() {
    return shopID;
}
