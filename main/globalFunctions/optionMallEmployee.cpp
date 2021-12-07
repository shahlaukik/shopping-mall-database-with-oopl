#include "../../include/mallEmployees.hpp"
#include "../../include/recognisedPerson.hpp"
#include <ios> //for <steamsize>
#include <iostream>
#include <limits> //for numeric_limits
#include <vector>
using namespace std;

void addMallPerson(vector<mallEmployees> &vecMallEmployees) {
    system("cls");
    mallEmployees newEmployee;
    newEmployee.setDetails();
    newEmployee.setEmployeeDetails();
    vecMallEmployees.push_back(newEmployee);
}

bool removeMallPerson(vector<mallEmployees> &vecMallEmployees) {
    system("cls");
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
    system("cls");
    bool repeat = true;
    while (repeat) {
        char choice;
        cout << endl
             << "\n1. SEARCH BY ID"
             << "\n2. DISPLAY ALL"
             << "\ne. EXIT"
             << "\nENTER YOUR CHOICE: ";
        cin >> choice;

        switch (choice) {
        case '1': {
            int input;
            cout << "\nEnter ID to display Person:- ";
            cin >> input;

            for (auto it = vecMallEmployees.begin(); it != vecMallEmployees.end(); it++) {
                int tempId = it->returnEmployeeId(); //Takes ID from Employee Class

                if (tempId == input) {
                    it->mallEmployees::getEmployeeDetails();
                    break;
                }
            }
        }

        case '2': {
            for (auto it = vecMallEmployees.begin(); it != vecMallEmployees.end(); it++) {
                it->mallEmployees::getEmployeeDetails();
                cout << endl;
            }
            break;
        }

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

void optionMallEmployee(vector<mallEmployees> &vMallEmployees) {
    system("cls");
    bool repeat = true;
    while (repeat) {
        char choice;
        cout
            << "\n1. ADD EMPLOYEE"
            << "\n2. REMOVE EMPLOYEE"
            << "\n3. DISPLAY EMPLOYEE"
            << "\ne. EXIT"
            << "\nENTER YOUR CHOICE: ";
        cin >> choice;

        switch (choice) {
        case '1':
            addMallPerson(vMallEmployees);
            break;

        case '2':
            removeMallPerson(vMallEmployees);
            break;

        case '3':
            displayPerson(vMallEmployees);
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