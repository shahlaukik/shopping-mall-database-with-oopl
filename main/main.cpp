#include "main.hpp"
using namespace std;

int main() {

    // Declare all the vectors
    vector<recognisedPerson> recognisedPersons;
    vector<recognisedOrganisation> recognisedOrganisations;
    vector<shopDetails> shopDetails;
    vector<employee> employees;
    vector<mallEmployees> mallEmployees;

    // Loading Database
    loadDatabase(recognisedPersons, recognisedOrganisations, shopDetails, employees, mallEmployees);
    bool repeat = true;
    while (repeat) {
        char choice;
        cout << "Choices" << endl;
        cin >> choice;
        switch (choice) {
        case '1':
            optionPerson(recognisedPersons);
            break;
        case 'e':
            repeat = false;
            break;
        }
    }

    // Store to the database
    saveDatabase(recognisedPersons, recognisedOrganisations, shopDetails, employees, mallEmployees);
    cout << "Finished";

    // exit after user aknowledges
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    return 0;
}
