// #include "main.hpp"
// Header files to include
#include <iostream>
#include <vector>
#include <ios> //for <steamsize>
#include <limits> //for numeric_limits

// Custom header files
#include <../include/customDataTypes.hpp>
#include <../include/employee.hpp>
#include <../include/mallBankAccount.hpp>
#include <../include/mallEmployees.hpp>
#include <../include/payment.hpp>
#include <../include/payout.hpp>
#include <../include/recognisedOrganisation.hpp>
#include <../include/recognisedPerson.hpp>
#include <../include/shopDetails.hpp>
#include <./globalFunctions/globalFunctions.hpp>
using namespace std;

int main() {

    // Declare all the vectors
    vector<recognisedPerson> recognisedPersons;
    vector<recognisedOrganisation> recognisedOrganisations;
    vector<shopDetails> shops;
    vector<employee> employees;
    vector<mallEmployees> mallEmployees;

    // Loading Database
    // loadDatabase(recognisedPersons, recognisedOrganisations, shops, employees, mallEmployees);

    char choice;
    cout << "Choices" << endl;
    cin >> choice;
    switch (choice) {
    case '1':
        optionPerson(recognisedPersons);
        break;
    }

    
    // Store to the database
    // saveDatabase(recognisedPersons, recognisedOrganisations, shops, employees, mallEmployees);

    // exit after user aknowledges
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();


    return 0;
}
