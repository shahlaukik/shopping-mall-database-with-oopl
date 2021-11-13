// Function to save database file
#include "../main.hpp"
#include <fstream>
using namespace std;

void saveDatabase(vector<recognisedPerson> recognisedPersons,
                  vector<recognisedOrganisation> recognisedOrganisations,
                  vector<shopDetails> shops,
                  vector<employee> employees,
                  vector<mallEmployees> mallEmployees) {


    // Save recognised persons
    ofstream recognisedPersonsFile;
    recognisedPersonsFile.open("../database/recognisedPersons.txt", ios::trunc);
    for (auto it = recognisedPersons.begin(); it != recognisedPersons.end(); it++)
             recognisedPersonsFile.write((char*)&it, sizeof(it));
    recognisedPersonsFile.close();

    // Save recognised organisations
    ofstream recognisedOrganisationsFile;
    recognisedOrganisationsFile.open("../database/recognisedOrganisations.txt", ios::trunc);
    for (auto it = recognisedOrganisations.begin(); it != recognisedOrganisations.end(); it++)
             recognisedOrganisationsFile.write((char*)&it, sizeof(it));
    recognisedOrganisationsFile.close();

    // Save shops
    ofstream shopsFile;
    shopsFile.open("../database/shops.txt", ios::trunc);
    for (auto it = shops.begin(); it != shops.end(); it++)
             shopsFile.write((char*)&it, sizeof(it));
    shopsFile.close();

    // Save employees
    ofstream employeesFile;
    employeesFile.open("../database/employees.txt", ios::trunc);
    for (auto it = employees.begin(); it != employees.end(); it++)
             employeesFile.write((char*)&it, sizeof(it));
    employeesFile.close();

    // Save mall employees
    ofstream mallEmployeesFile;
    mallEmployeesFile.open("../database/mallEmployees.txt", ios::trunc);
    for (auto it = mallEmployees.begin(); it != mallEmployees.end(); it++)
             mallEmployeesFile.write((char*)&it, sizeof(it));
    mallEmployeesFile.close();
}


