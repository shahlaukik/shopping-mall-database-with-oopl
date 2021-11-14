// Function to load database
#include "../main.hpp"
#include <fstream>
using namespace std;

// Function to load recognised persons from database file
void loadDatabase(vector<recognisedPerson> &vRecognisedPersons) {
    cout << "Hello from loadDatabase of recognised persons" << endl;
}

void loadDatabase(vector<recognisedPerson> &vRecognisedPersons,
                  vector<recognisedOrganisation> &vRecognisedOrganisations,
                  vector<shopDetails> &vShops,
                  vector<employee> &vEmployees,
                  vector<mallEmployees> &vMallEmployees,
                  vector<transaction> &vTransactions,
                  vector<payout> &vPayouts,
                  vector<payment> &vPayments,
                  mallBankAccount &acMall) {

    cout << "Hello from loadDatabase" << endl;
    loadDatabase(vRecognisedPersons);

    // // Load recognised persons
    // ifstream recognisedPersonsFile;
    // recognisedPersonsFile.open("recognisedPersons.txt", ios::in);
    // recognisedPerson recognisedPerson;
    // while (!recognisedPersonsFile.eof() &&
    //        !recognisedPersonsFile.peek() == std::ifstream::traits_type::eof()) {
    //     recognisedPersonsFile.read((char *)&recognisedPerson, sizeof(recognisedPerson));
    //     vRecognisedPersons.push_back(recognisedPerson);
    // }
    // recognisedPersonsFile.close();

    // // Load recognised organisations
    // ifstream recognisedOrganisationsFile;
    // recognisedOrganisationsFile.open("recognisedOrganisations.txt", ios::in);
    // recognisedOrganisation recognisedOrganisation;
    // while (!recognisedOrganisationsFile.eof() &&
    //        !recognisedOrganisationsFile.peek() == std::ifstream::traits_type::eof()) {
    //     recognisedOrganisationsFile.read((char *)&recognisedOrganisation, sizeof(recognisedOrganisation));
    //     vRecognisedOrganisations.push_back(recognisedOrganisation);
    // }
    // recognisedOrganisationsFile.close();

    // // Load shops
    // ifstream shopsFile;
    // shopsFile.open("shops.txt", ios::in);
    // shopDetails shop;
    // while (!shopsFile.eof() &&
    //        !shopsFile.peek() == std::ifstream::traits_type::eof()) {
    //     shopsFile.read((char *)&shop, sizeof(shop));
    //     vShops.push_back(shop);
    // }
    // shopsFile.close();

    // // Load employees
    // ifstream employeesFile;
    // employeesFile.open("employees.txt", ios::in);
    // employee employee;
    // while (!employeesFile.eof() &&
    //        !employeesFile.peek() == std::ifstream::traits_type::eof()) {
    //     employeesFile.read((char *)&employee, sizeof(employee));
    //     vEmployees.push_back(employee);
    // }
    // employeesFile.close();

    // // Load mall employees
    // ifstream mallEmployeesFile;
    // mallEmployeesFile.open("mallEmployees.txt", ios::in);
    // mallEmployees mallEmployee;
    // while (!mallEmployeesFile.eof() &&
    //        !mallEmployeesFile.peek() == std::ifstream::traits_type::eof()) {
    //     mallEmployeesFile.read((char *)&mallEmployee, sizeof(mallEmployee));
    //     vMallEmployees.push_back(mallEmployee);
    // }
    // mallEmployeesFile.close();
}
