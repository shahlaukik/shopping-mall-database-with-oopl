// This file contains declaration of global functions

#pragma once
#ifndef GLOBALFUNCTIONS_HPP
#define GLOBALFUNCTIONS_HPP

// Functions to store and load database at startup and shutdown
void saveDatabase(vector<recognisedPerson> recognisedPersons,
                  vector<recognisedOrganisation> recognisedOrganisations,
                  vector<shopDetails> shops,
                  vector<employee> employees,
                  vector<mallEmployees> mallEmployees);
void loadDatabase(vector<recognisedPerson> &recognisedPersons,
                  vector<recognisedOrganisation> &recognisedOrganisations,
                  vector<shopDetails> &shops,
                  vector<employee> &employees,
                  vector<mallEmployees> &mallEmployees);

// Functions to give choices to user
void optionPerson(vector<recognisedPerson> &recognisedPersons);
void optionOrganisation(vector<recognisedOrganisation> &recognisedOrganisations);

#endif // GLOBALFUNCTIONS_HPP