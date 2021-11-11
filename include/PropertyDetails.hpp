#pragma once
#ifndef PROPERTYDETAILS_HPP
#define PROPERTYDETAILS_HPP
#include "./customDataTypes.hpp"
using namespace std;

class PropertyDetails //class declaration
{
    //declaring data-members
    public:
    int PropertyID;
    int PropertyNumber;
    int Floor;
    float Area;
    int OwnerRPID;
    struct date DateOfPurchase;

    //declaring functions
    void setPropertyID();
    void setPropertyNumber();
    void setFloor();
    void setArea();
    void setOwnerRPID();
    void getOwnerRPID();
    void getDateOfPurchase();
};

#endif