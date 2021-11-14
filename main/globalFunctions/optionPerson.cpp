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
    system("cls");
    bool repeat = true;
    while (repeat) {
        char choice;
        cout << endl
             << "\n1    :   SEARCH BY ID"
             << "\n2    :   DISPLAY ALL"
             << "\ne   :   EXIT"
             << "\nENTER YOUR CHOICE: ";
        cin >> choice;

        switch (choice) {
        case '1': {
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
             << "\n1   :   ADD PERSON"
             << "\n2   :   REMOVE PERSON"
             << "\n3   :   DISPLAY PERSON-DETAILS"
             << "\ne   :   EXIT"
             << "\nENTER YOUR CHOICE: ";
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
            cout << "\nIncorrect choice Try again !";
            break;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    }
}
