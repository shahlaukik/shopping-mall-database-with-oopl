#include "../include/recognisedOrganisation.hpp"
#include <iostream>
#include <vector>
using namespace std;

// Function to Add Organisation details

void addOrganisation(vector<recognisedOrganisation> &recognisedOrganisations) {
    recognisedOrganisation newOrganisation;
    newOrganisation.setDetails();
    recognisedOrganisations.push_back(newOrganisation);
}

// Function to Delete Organisation Details
bool removeOrganisation(vector<recognisedOrganisation> &recognisedOrganisations) {
    int inputId;
    cout << endl
         << "Enter Organisation's ID: ";
    cin >> inputId;

    for (auto it = recognisedOrganisations.begin(); it != recognisedOrganisations.end(); it++) {
        int tempId = it->returnRecognisedOrganisationId();
            if (tempId == inputId) { 
                cout << "\n"
                    << "ID: " << it->returnRecognisedOrganisationId()  << " , " << "Name: " << it->returnRegisterdName() << " is removed.";
            recognisedOrganisations.erase(it);
            return true;
            break;
        }
    }
    return false;
}

// Function to Display details

void displayOrganisation(vector<recognisedOrganisation> &recognisedOrganisations) {
    int choice;
    cout << endl
         << "\n1    :   SEARCH BY ID"
         << "\n2    :   DISPLAY ALL"
         << "\nENTER YOUR CHOICE: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int input;
            cout << "\nEnter ID to display Organisation:- ";
            cin >> input;

            for (auto it = recognisedOrganisations.begin(); it != recognisedOrganisations.end(); it++) {
                int tempId = it->returnRecognisedOrganisationId();

                if (tempId == input) {
                    it->getDetails();
                    break;
                }
            }
        }

        case 2:
            {
                for (auto it = recognisedOrganisations.begin(); it != recognisedOrganisations.end(); it++) {
                    it->getDetails();
                    cout << endl;
                }
                break;
            }

        default:
            break;
    }
}

// main function of this file to be used
void optionOrganisation(vector<recognisedOrganisation> &recognisedOrganisations)
{
    int choice;
    cout << endl
         << "\n1   :   ADD Organisation"
         << "\n2   :   REMOVE Organisation"
         << "\n3   :   DISPLAY Organisation-DETAILS"
         << "ENTER YOUR CHOICE: ";
    cin >> choice;

    switch (choice) {
    case 1: 
        addOrganisation(recognisedOrganisations);
        break;

    case 2: 
        removeOrganisation(recognisedOrganisations);
        break;
    

    case 3: 
        displayOrganisation(recognisedOrganisations);
        break;
    

    default:
        break;
    }
}