#include "main.hpp"
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

    
    return 0;

    // Store to the database
    // saveDatabase(recognisedPersons, recognisedOrganisations, shops, employees, mallEmployees);
}
