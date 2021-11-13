#include "../include/mallEmployees.hpp"
#include "../include/recognisedPerson.hpp"
#include <iostream>
#include <vector>
using namespace std;

void addMallPerson(vector<mallEmployees> &vecMallEmployees) {
    mallEmployees newEmployee;
    newEmployee.setDetails();
    newEmployee.setEmployeeDetails();
    vecMallEmployees.push_back(newEmployee);
}

bool removeMallPerson(vector<mallEmployees> &vecMallEmployees) {

    int inputId;
    cout << endl
         << "Enter Person's ID: ";
    cin >> inputId;

    for (auto it = vecMallEmployees.begin(); it != vecMallEmployees.end(); it++) {
        int tempId = it->returnEmployeeId(); //Returns Employee ID from Employee Class
        if (tempId == inputId) {
            cout << "\n"
                 << (*it).returnName() << " is removed."; //Returns Name from Employee Class
            vecMallEmployees.erase(it);                   //removes it
            return true;
            break;
        }
    }
    return false;
}

void displayPerson(vector<mallEmployees> &vecMallEmployees) {
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

        for (auto it = vecMallEmployees.begin(); it != vecMallEmployees.end(); it++) {
            int tempId = it->returnEmployeeId(); //Takes ID from Employee Class

            if (tempId == input) {
                it->getDetails();
                break;
            }
        }
    }

    case 2: {
        for (auto it = vecMallEmployees.begin(); it != vecMallEmployees.end(); it++) {
            it->employee::getEmployeeDetails(); //get details from Employee Class
            it->mallEmployees::getEmployeeDetails();
            cout << endl;
        }
        break;
    }

    default:
        break;
    }
}
