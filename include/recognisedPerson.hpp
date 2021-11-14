#pragma once
#ifndef RECOGNISEDPERSON_HPP
#define RECOGNISEDPERSON_HPP

#include "customDataTypes.hpp"
#include <iostream>
#include <vector>
using namespace std;

class recognisedPerson {
    protected: // Sensitive info is protected
    int recognisedPersonId;
    string name;
    address address;
    date birthDate;
    gender sex;
    string phoneNumber;
    string email;

    public:
    void setDetails(); //To set all details at once
    void getDetails(); //To display all details at once

    /* functions to return each data member one at a time */

    int returnRecognisedPersonId(); // for ID
    string returnName();            // for Name
    date returnDate();              // for Date of Birth
    string returnPhoneNumber();     // for Phone Number
    string returnEmail();           // for Email
    gender returnGender();          // for Gender

    // declare store and load database as friend functions
    friend void saveDatabase(vector<recognisedPerson> &vRecognisedPersons);
    friend void loadDatabase(vector<recognisedPerson> &vRecognisedPersons);
};

#endif // RECOGNISEDPERSON_HPP