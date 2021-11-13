// This file contains declaration of global functions

#pragma once
#ifndef GLOBALFUNCTIONS_HPP
#define GLOBALFUNCTIONS_HPP

// Functions to store and load database at startup and shutdown
void saveDatabase(vector<recognisedPerson> &vRecognisedPersons,
                  vector<recognisedOrganisation> &vRecognisedOrganisations,
                  vector<shopDetails> &vShops,
                  vector<employee> &vEmployees,
                  vector<mallEmployees> &vMallEmployees);
void loadDatabase(vector<recognisedPerson> &vRecognisedPersons,
                  vector<recognisedOrganisation> &vRecognisedOrganisations,
                  vector<shopDetails> &vShops,
                  vector<employee> &vEmployees,
                  vector<mallEmployees> &vMallEmployees);

// Functions to give choices to user
void optionPerson(vector<recognisedPerson> &vRecognisedPersons);
void optionOrganisation(vector<recognisedOrganisation> &vRecognisedOrganisations);
void optionShop(vector<shopDetails> &vShops);
void optionEmployee(vector<employee> &vEmployees);
void optionMallEmployee(vector<mallEmployees> &vMallEmployees);
void optionFinance(mallBankAccount &acMall, vector<mallEmployees> &vMallEmployees, vector<transaction> &vTransactions);

#endif // GLOBALFUNCTIONS_HPP