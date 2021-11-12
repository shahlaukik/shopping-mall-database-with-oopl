#pragma once
#ifndef PROPERTYDETAILS_HPP
#define PROPERTYDETAILS_HPP
#include "../customDataTypes.hpp"
using namespace std;

class propertyDetails //class declaration
{
    //declaring data-members
    protected:
    int propertyID;
    int propertyNumber;
    int floor;
    float area;
    int ownerRPID;
    struct date dateOfPurchase;

    //declaring functions
    public:
    void setPropertyID();
    void setPropertyNumber();
    void setFloor();
    void setArea();
    void setOwnerRPID();
    void getOwnerRPID();
    void getDateOfPurchase();
};

#endif
