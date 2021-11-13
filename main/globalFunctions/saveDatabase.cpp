// Function to save database file
#include "../main.hpp"
using namespace std;

void saveDatabase(vector<recognisedPerson> recognisedPersons,
                  vector<recognisedOrganisation> recognisedOrganisations,
                  vector<shopDetails> shops,
                  vector<employee> employees,
                  vector<mallEmployees> mallEmployees) {

    // Save recognised persons
    ofstream recognisedPersonsFile;
    recognisedPersonsFile.open("recognisedPersons.txt");
    for (auto it = recognisedPersons.begin(); it != recognisedPersons.end(); it++)
        recognisedPersonsFile.write((char *)&it, sizeof(it));
    recognisedPersonsFile.close();

    // Save recognised organisations
    ofstream recognisedOrganisationsFile;
    recognisedOrganisationsFile.open("recognisedOrganisations.txt");
    for (auto it = recognisedOrganisations.begin(); it != recognisedOrganisations.end(); it++)
        recognisedOrganisationsFile.write((char *)&it, sizeof(it));
    recognisedOrganisationsFile.close();

    // Save shops
    ofstream shopsFile;
    shopsFile.open("shops.txt");
    for (auto it = shops.begin(); it != shops.end(); it++)
        shopsFile.write((char *)&it, sizeof(it));
    shopsFile.close();

    // Save employees
    ofstream employeesFile;
    employeesFile.open("employees.txt");
    for (auto it = employees.begin(); it != employees.end(); it++)
        employeesFile.write((char *)&it, sizeof(it));
    employeesFile.close();

    // Save mall employees
    ofstream mallEmployeesFile;
    mallEmployeesFile.open("mallEmployees.txt");
    for (auto it = mallEmployees.begin(); it != mallEmployees.end(); it++)
        mallEmployeesFile.write((char *)&it, sizeof(it));
    mallEmployeesFile.close();
}
