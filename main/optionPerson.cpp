
// 1 add window// remove
// display

// 1. add - setter class window
// 2. remove - id input, match with vector list, removdelete
// 3. display - display all
#include "../include/recognisedPerson.hpp"
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

    for (auto it = recognisedPersons.begin(); it < recognisedPersons.end(); it++)
    {
        int tempId = it->returnRecognisedPersonId();
        if ( tempId == inputId )
        {
            cout << "\n" << (*it).returnName() << " is removed.";
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
        << "\n2    :   DISPLAY ALL";
    for (auto it = recognisedPersons.begin(); it < recognisedPersons.end(); it++)
    {
        it->getDetails();
    }
    
}

void optionPerson(vector<recognisedPerson> &recognisedPersons) {
    int choice;
    cout << endl
         << "\n1   :   ADD PERSON"
         << "\n2   :   REMOVE PERSON"
         << "\n3   :   DISPLAY PERSON-DETAILS"
         << "ENTER YOUR CHOICE: ";
    cin >> choice;

    switch (choice) {
    case 1:
        /* code */
        break;

    case 2:
        /* code */
        break;

    case 3:
        /* code */
        break;

    default:
        break;
    }
}
void optionPerson(vector<recognisedPerson> &recognisedPersons) {
    cout << "Choices: 1. add 2. Remove 3. delete" << endl;
    recognisedPerson newPerson;
    newPerson.setDetails();
    recognisedPersons.push_back(newPerson);
}