#pragma once
#ifndef SHOPDETAILS_HPP
#define SHOPDETAILS_HPP
#include "customDataTypes.hpp"
using namespace std;

class propertyDetails //class declaration
{
    //declaring data-members
    protected:
    int shopID;
    int propertyNumber;
    int floor;
    float area;
    int ownerRPID;
    struct date dateOfPurchase;

    //declaring functions
    public:
    void setshopID();
    void setPropertyNumber();
    void setFloor();
    void setArea();
    void setOwnerRPID();
    void getOwnerRPID();
    void getDateOfPurchase();
};

#endif
