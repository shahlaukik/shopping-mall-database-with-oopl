#include "../../include/employee.hpp"
#include <ios> //for <steamsize>
#include <iostream>
#include <limits> //for numeric_limits
#include <vector>
using namespace std;

void addEmployee(vector<employee> &vEmployee) {
    system("cls");
    employee newEmployee;
    newEmployee.setEmployeeDetails();
    vEmployee.push_back(newEmployee);
}

bool removeEmployee(vector<employee> &vEmployee) {
    system("cls");
    int inputId;
    cout << endl
         << "Enter the Employee's ID: ";
    cin >> inputId;

    for (auto it = vEmployee.begin(); it != vEmployee.end(); it++) {
        int tempId = it->returnEmployeeId();
        if (tempId == inputId) {
            cout << "\nThe Employee with the ID "
                 << (*it).returnEmployeeId() << " has been removed.";
            vEmployee.erase(it);
            return true;
            break;
        }
    }
    return false;
}

void displayEmployee(vector<employee> &vEmployee) {
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
            system("cls");
            int input;
            cout << "\nEnter ID to display the Employee's details :";
            cin >> input;

            for (auto it = vEmployee.begin(); it != vEmployee.end(); it++) {
                int tempId = it->returnEmployeeId();

                if (tempId == input) {
                    it->getEmployeeDetails();
                    break;
                }
            }
            break;
        }

        case '2': {
            system("cls");
            for (auto it = vEmployee.begin(); it != vEmployee.end(); it++) {
                it->getEmployeeDetails();
                cout << endl;
            }
            break;
        }

        case 'e': {
            repeat = false;
            break;
        }

        default:
            cout << "\nIncorrect choice Try again !";
            break;
        }

        // exit after user aknowledges
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    }
}

void optionEmployee(vector<employee> &vEmployee) {
    system("cls");
    bool repeat = true;
    while (repeat) {
        char choice;
        cout << endl
             << "\n1. ADD AN EMPLOYEE"
             << "\n2. REMOVE AN EMPLOYEE"
             << "\n3. DISPLAY THE EMPLOYEE DETAILS"
             << "\ne. EXIT"
             << "\nENTER YOUR CHOICE: ";
        cin >> choice;

        switch (choice) {
        case '1':
            addEmployee(vEmployee);
            break;

        case '2':
            removeEmployee(vEmployee);
            break;

        case '3':
            displayEmployee(vEmployee);
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
