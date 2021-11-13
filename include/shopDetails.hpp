#pragma once
#ifndef SHOPDETAILS_HPP
#define SHOPDETAILS_HPP
#include "customDataTypes.hpp"
using namespace std;

class shopDetails //class declaration
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
    void setShopID();
    void setPropertyNumber();
    void setFloor();
    void setArea();
    void setOwnerRPID();
    void setDateOfPurchase();
    
    //Function to get all the details
    void getDetails();
    
    //function to return the data member
    int returnShopID();

};

#endif
