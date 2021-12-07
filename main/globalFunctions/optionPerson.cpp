// This file handles operations related to persons

// Include header files
#include "../../include/recognisedPerson.hpp"
#include <iostream>
#include <vector>
#include <ios> //for <steamsize>
#include <limits> //for numeric_limits
using namespace std;

void addPerson(vector<recognisedPerson> &recognisedPersons) {
    system("cls");
    recognisedPerson newPerson;
    newPerson.setDetails();
    recognisedPersons.push_back(newPerson);
}

bool removePerson(vector<recognisedPerson> &recognisedPersons) {
    system("cls");
    int inputId;
    cout << endl
         << "Enter Person's ID to be removed: ";
    cin >> inputId;

    for (auto it = recognisedPersons.begin(); it != recognisedPersons.end(); it++) {
        int tempId = it->returnRecognisedPersonId();
        if (tempId == inputId) {
            cout << "\n"
                 << (*it).returnName() << " is removed.";
            recognisedPersons.erase(it);
            return true;
        }
    }
    return false;
}

void displayPerson(vector<recognisedPerson> &recognisedPersons) {
    system("cls");
    bool repeat = true;
    while (repeat) {
        char choice;
        cout << endl
             << "\n1. Display by ID"
             << "\n2. Display all persons"
             << "\ne. Exit"
             << "\nSelect option: ";
        cin >> choice;

        bool temp = false;
        switch (choice) {
        case '1': {
            int input;
            cout << "\nEnter ID to display Person: ";
            cin >> input;

            for (auto it = recognisedPersons.begin(); it != recognisedPersons.end(); it++) {
                int tempId = it->returnRecognisedPersonId();

                if (tempId == input) {
                    it->getDetails();
                    temp = true;
                    break;
                }
            }
            if (!temp) {
                cout << "\nNo person found with ID: " << input;
            }
            break;
        }

        case '2': {
            for (auto it = recognisedPersons.begin(); it != recognisedPersons.end(); it++) {
                it->getDetails();
                cout << endl;
            }
            break;
        }

        case 'e':
            repeat = false;
            break;
            
        default:
        cout << "Invalid choice. Please try again.";
            break;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    }
}

// Main function of this file that will be used
void optionPerson(vector<recognisedPerson> &recognisedPersons) {
    system("cls");
    bool repeat = true;
    while (repeat) {
        char choice;
        cout << endl
             << "\n1. Add Person"
             << "\n2. Remove Person"
             << "\n3. Display Person"
             << "\ne. Exit"
             << "\nSelect option: ";
        cin >> choice;

        switch (choice) {
        case '1':
            addPerson(recognisedPersons);
            break;

        case '2':
            removePerson(recognisedPersons);
            break;

        case '3':
            displayPerson(recognisedPersons);
            break;

        case 'e':
            repeat = false;
            break;

        default:
            cout << "Invalid choice. Please try again.";
            break;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    }
}
