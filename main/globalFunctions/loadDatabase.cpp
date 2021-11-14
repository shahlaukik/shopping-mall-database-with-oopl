// Function to load database
#include "../main.hpp"
#include <fstream>
using namespace std;

// Declare functions
void loadDatabase(vector<recognisedPerson> &vRecognisedPersons);
void loadDatabase(vector<recognisedOrganisation> &vRecognisedOrganisations);
void loadDatabase(vector<shopDetails> &vShops){};
void loadDatabase(vector<employee> &vEmployees){};
void loadDatabase(vector<mallEmployees> &vMallEmployees){};
void loadDatabase(vector<transaction> &vTransactions){};
void loadDatabase(vector<payout> &vPayouts){};
void loadDatabase(vector<payment> &vPayments){};
void loadDatabase(mallBankAccount &acMall){};

void loadDatabase(vector<recognisedPerson> &vRecognisedPersons,
                  vector<recognisedOrganisation> &vRecognisedOrganisations,
                  vector<shopDetails> &vShops,
                  vector<employee> &vEmployees,
                  vector<mallEmployees> &vMallEmployees,
                  vector<transaction> &vTransactions,
                  vector<payout> &vPayouts,
                  vector<payment> &vPayments,
                  mallBankAccount &acMall) {

    loadDatabase(vRecognisedPersons);
    loadDatabase(vRecognisedOrganisations);
    loadDatabase(vShops);
    loadDatabase(vEmployees);
    loadDatabase(vMallEmployees);
    loadDatabase(vTransactions);
    loadDatabase(vPayouts);
    loadDatabase(vPayments);
    loadDatabase(acMall);
}

// Function to load recognised persons from database file
void loadDatabase(vector<recognisedPerson> &vRecognisedPersons) {

    // Open database file
    ifstream recognisedPersonsFile;
    recognisedPersonsFile.open("database/recognisedPersons.txt");

    // Read recognised persons from database file
    if (recognisedPersonsFile.is_open()) {
        recognisedPerson recognisedPerson;
        string fileLine;
        while (!recognisedPersonsFile.eof()) {
            getline(recognisedPersonsFile, fileLine);
            if (fileLine == "") {
                break;
            }
            recognisedPerson.recognisedPersonId = stoi(fileLine);
            getline(recognisedPersonsFile, fileLine);
            recognisedPerson.name = fileLine;
            getline(recognisedPersonsFile, fileLine);
            recognisedPerson.address.street = fileLine;
            getline(recognisedPersonsFile, fileLine);
            recognisedPerson.address.city = fileLine;
            getline(recognisedPersonsFile, fileLine);
            recognisedPerson.address.state = fileLine;
            getline(recognisedPersonsFile, fileLine);
            recognisedPerson.address.zip = fileLine;
            getline(recognisedPersonsFile, fileLine);
            recognisedPerson.birthDate.day = stoi(fileLine);
            getline(recognisedPersonsFile, fileLine);
            recognisedPerson.birthDate.month = stoi(fileLine);
            getline(recognisedPersonsFile, fileLine);
            recognisedPerson.birthDate.year = stoi(fileLine);
            getline(recognisedPersonsFile, fileLine);
            recognisedPerson.sex = static_cast<gender>(stoi(fileLine));
            getline(recognisedPersonsFile, fileLine);
            recognisedPerson.phoneNumber = fileLine;
            getline(recognisedPersonsFile, fileLine);
            recognisedPerson.email = fileLine;
            getline(recognisedPersonsFile, fileLine);
            if (fileLine == "") {
                vRecognisedPersons.push_back(recognisedPerson);
            } else {
                cout << "Error: Recognised persons database file corrupted" << endl;
                exit(1);
            }
        }
    } else {
        cout << "Unable to open recognised persons database file" << endl;
    }

    // Close database file
    recognisedPersonsFile.close();
}

// Function to load recognised organisations from database file
void loadDatabase(vector<recognisedOrganisation> &vRecognisedOrganisations) {

    // Open database file
    ifstream recognisedOrganisationsFile;
    recognisedOrganisationsFile.open("database/recognisedOrganisations.txt");

    // Read recognised organisations from database file
    if (recognisedOrganisationsFile.is_open()) {
        recognisedOrganisation recognisedOrganisation;
        string fileLine;
        while (!recognisedOrganisationsFile.eof()) {
            getline(recognisedOrganisationsFile, fileLine);
            if (fileLine == "") {
                break;
            }
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.recognisedOrganisationId = stoi(fileLine);
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.registeredName = fileLine;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.registeredOrgnisationType = fileLine;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.registrationAddress.street = fileLine;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.registrationAddress.city = fileLine;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.registrationAddress.state = fileLine;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.registrationAddress.zip = fileLine;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.registrationDate.day = stoi(fileLine);;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.registrationDate.month = stoi(fileLine);;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.registrationDate.year = stoi(fileLine);;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.phoneNumber = fileLine;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.emailId = fileLine;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.registrationId = stoi(fileLine);;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.gstn = fileLine;
            getline(recognisedOrganisationsFile, fileLine);
            if (fileLine == "") {
                vRecognisedOrganisations.push_back(recognisedOrganisation);
            }
            else {
                cout << "Error: Recognised organisation database file corrupted" << endl;
                exit(1);
            }
        }
    } else {
        cout << "Unable to open recognised organisations database file" << endl;
    }

    // Close database file
    recognisedOrganisationsFile.close();
}

