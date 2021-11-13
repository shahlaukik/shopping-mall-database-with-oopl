// This file contains declaration of global functions

#pragma once
#ifndef GLOBALFUNCTIONS_HPP
#define GLOBALFUNCTIONS_HPP

// Functions to store and load database at startup and shutdown
void loadDatabase(vector<recognisedPerson> &recognisedPersons,
                  vector<recognisedOrganisation> &recognisedOrganisations,
                  vector<shopDetails> &shops,
                  vector<employee> &employees,
                  vector<mallEmployees> &mallEmployees);
void saveDatabase(vector<recognisedPerson> &recognisedPersons,
                  vector<recognisedOrganisation> &recognisedOrganisations,
                  vector<shopDetails> &shops,
                  vector<employee> &employees,
                  vector<mallEmployees> &mallEmployees);

// Function to give choices to user
void optionPerson(vector<recognisedPerson> &recognisedPersons);

#endif // GLOBALFUNCTIONS_HPP