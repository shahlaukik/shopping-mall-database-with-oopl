// Function to save database file
#include "../main.hpp"
using namespace std;

// Declare functions
void saveDatabase(vector<recognisedPerson> &vRecognisedPersons);
void saveDatabase(vector<recognisedOrganisation> &vRecognisedOrganisations);
void saveDatabase(vector<shopDetails> &vShops){};
void saveDatabase(vector<employee> &vEmployees){};
void saveDatabase(vector<mallEmployees> &vMallEmployees){};

void saveDatabase(vector<recognisedPerson> &vRecognisedPersons,
                  vector<recognisedOrganisation> &vRecognisedOrganisations,
                  vector<shopDetails> &vShops,
                  vector<employee> &vEmployees,
                  vector<mallEmployees> &vMallEmployees) {

    // Save database file
    saveDatabase(vRecognisedPersons);
    saveDatabase(vRecognisedOrganisations);
    saveDatabase(vShops);
    saveDatabase(vEmployees);
    saveDatabase(vMallEmployees);

}

// Function to save recognised persons to database file
void saveDatabase(vector<recognisedPerson> &vRecognisedPersons) {
    cout << "Hello from saveDatabase of recognised persons!" << endl;

    // Open database file
    ofstream recognisedPersonsFile;
    recognisedPersonsFile.open("database/recognisedPersons.txt");

    // Write recognised persons to database file
    for (int i = 0; i < vRecognisedPersons.size(); i++) {
        recognisedPersonsFile << vRecognisedPersons[i].recognisedPersonId << endl;
        recognisedPersonsFile << vRecognisedPersons[i].name << endl;
        recognisedPersonsFile << vRecognisedPersons[i].address.street << endl;
        recognisedPersonsFile << vRecognisedPersons[i].address.city << endl;
        recognisedPersonsFile << vRecognisedPersons[i].address.state << endl;
        recognisedPersonsFile << vRecognisedPersons[i].address.zip << endl;
        recognisedPersonsFile << vRecognisedPersons[i].birthDate.day << endl;
        recognisedPersonsFile << vRecognisedPersons[i].birthDate.month << endl;
        recognisedPersonsFile << vRecognisedPersons[i].birthDate.year << endl;
        recognisedPersonsFile << vRecognisedPersons[i].sex << endl;
        recognisedPersonsFile << vRecognisedPersons[i].phoneNumber << endl;
        recognisedPersonsFile << vRecognisedPersons[i].email << endl;
        recognisedPersonsFile << endl;
    }

    // Close database file
    recognisedPersonsFile.close();
}

// Function to save recognised origanisation to database file
void saveDatabase(vector<recognisedOrganisation> &vRecognisedOrganisations) {

    // Open database file
    ofstream recognisedOrganisationsFile;
    recognisedOrganisationsFile.open("database/recognisedOrganisations.txt");

    // Write recognised organisations to database file
    for (int i = 0; i < vRecognisedOrganisations.size(); i++) {
        recognisedOrganisationsFile << vRecognisedOrganisations[i].recognisedOrganisationId << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].registeredName << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].registeredOrgnisationType << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].registrationAddress.street << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].registrationAddress.city << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].registrationAddress.state << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].registrationAddress.zip << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].registrationDate.day << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].registrationDate.month << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].registrationDate.year << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].phoneNumber << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].emailId << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].registrationId << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].gstn << endl;
        recognisedOrganisationsFile << endl;
    }

    // Close database file
    recognisedOrganisationsFile.close();
}

