#pragma once
#ifndef RECOGNISEDORGANISATION_HPP
#define RECOGNISEDORGANISATION_HPP

#include "customDataTypes.hpp"
#include <iostream>
using namespace std;

class recognisedOrganisation {
    protected: // Sensitive info is protected
    int recognisedOrganisationId;
    string registeredName;
    string registeredOrgnisationType;
    address registrationAddress;
    date registrationDate;
    string phoneNumber;
    string emailId;
    int registrationId;
    string gstn;

    public:
    void setDetails(); // To set all details at once
    void getDetails(); // To display all details at once

    // functions to return each data member one at a time
    
    int returnRecognisedOrganisationId();// for ID 
    string returnRegisteredOrganisationType(); // for Type 
    string returnRegisterdName(); // for Name 
    address returnRegistrationAddress(); // for Address 
    date returnDate(); // for Registration Date
    string returnPhoneNumber(); // for Phone Number 
    string returnEmailId(); // for Email 
    int returnRegistrationId(); // for registration ID
    string returnGstn(); // for GST Number
};

#endif // RECOGNISEDORGANISATION_HPP