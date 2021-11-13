#include "../../include/recognisedPerson.hpp"
#include <iostream>
#include <vector>
using namespace std;

void addPerson(vector<recognisedPerson> &recognisedPersons) {
    recognisedPerson newPerson;
    newPerson.setDetails();
    recognisedPersons.push_back(newPerson);
}

bool removePerson(vector<recognisedPerson> &recognisedPersons) {
    int inputId;
    cout << endl
         << "Enter Person's ID: ";
    cin >> inputId;

    for (auto it = recognisedPersons.begin(); it != recognisedPersons.end(); it++) {
        int tempId = it->returnRecognisedPersonId();
            if (tempId == inputId) { 
                cout << "\n"
                    << (*it).returnName() << " is removed.";
            recognisedPersons.erase(it);
            return true;
            break;
        }
    }
    return false;
}

void displayPerson(vector<recognisedPerson> &recognisedPersons) {
    int choice;
    cout << endl
         << "\n1    :   SEARCH BY ID"
         << "\n2    :   DISPLAY ALL"
         << "\nENTER YOUR CHOICE: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int input;
            cout << "\nEnter ID to display Person:- ";
            cin >> input;

            for (auto it = recognisedPersons.begin(); it != recognisedPersons.end(); it++) {
                int tempId = it->returnRecognisedPersonId();

                if (tempId == input) {
                    it->getDetails();
                    break;
                }
            }
            break;
        }

        case 2:
            {
                for (auto it = recognisedPersons.begin(); it != recognisedPersons.end(); it++) {
                    it->getDetails();
                    cout << endl;
                }
                break;
            }

        default:
            break;
    }

}

// Main function of this file that will be used
void optionPerson(vector<recognisedPerson> &recognisedPersons) {
    system("cls");
    int choice;
    cout << endl
         << "\n1   :   ADD PERSON"
         << "\n2   :   REMOVE PERSON"
         << "\n3   :   DISPLAY PERSON-DETAILS"
         << "\nENTER YOUR CHOICE: ";
    cin >> choice;

    switch (choice) {
    case 1: 
        addPerson(recognisedPersons);
        break;

    case 2: 
        removePerson(recognisedPersons);
        break;
    

    case 3: 
        displayPerson(recognisedPersons);
        break;
    

    default:
        break;
    }
}
