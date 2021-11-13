// Function to save database file
#include "../main.hpp"
using namespace std;

void saveDatabase(vector<recognisedPerson> &vRecognisedPersons,
                  vector<recognisedOrganisation> &vRecognisedOrganisations,
                  vector<shopDetails> &vShops,
                  vector<employee> &vEmployees,
                  vector<mallEmployees> &vMallEmployees) {

    // Save recognised persons
    ofstream recognisedPersonsFile;
    recognisedPersonsFile.open("recognisedPersons.txt");
    for (auto it = vRecognisedPersons.begin(); it != vRecognisedPersons.end(); it++)
        recognisedPersonsFile.write((char *)&it, sizeof(it));
    recognisedPersonsFile.close();

    // Save recognised organisations
    ofstream recognisedOrganisationsFile;
    recognisedOrganisationsFile.open("recognisedOrganisations.txt");
    for (auto it = vRecognisedOrganisations.begin(); it != vRecognisedOrganisations.end(); it++)
        recognisedOrganisationsFile.write((char *)&it, sizeof(it));
    recognisedOrganisationsFile.close();

    // Save shops
    ofstream shopsFile;
    shopsFile.open("shops.txt");
    for (auto it = vShops.begin(); it != vShops.end(); it++)
        shopsFile.write((char *)&it, sizeof(it));
    shopsFile.close();

    // Save employees
    ofstream employeesFile;
    employeesFile.open("employees.txt");
    for (auto it = vEmployees.begin(); it != vEmployees.end(); it++)
        employeesFile.write((char *)&it, sizeof(it));
    employeesFile.close();

    // Save mall employees
    ofstream mallEmployeesFile;
    mallEmployeesFile.open("mallEmployees.txt");
    for (auto it = vMallEmployees.begin(); it != vMallEmployees.end(); it++)
        mallEmployeesFile.write((char *)&it, sizeof(it));
    mallEmployeesFile.close();
}
