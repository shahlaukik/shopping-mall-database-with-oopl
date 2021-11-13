#include "../../include/employee.hpp"
#include <iostream>
#include <vector>
using namespace std;

void addEmployee(vector<employee> &vEmployee) {
    employee newEmployee;
    newEmployee.setEmployeeDetails();
    vEmployee.push_back(newEmployee);
}

bool removeEmployee(vector<employee> &vEmployee) {
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
    int choice;
    cout << endl
         << "\n1    :   SEARCH BY ID"
         << "\n2    :   DISPLAY ALL"
         << "\nENTER YOUR CHOICE: ";
    cin >> choice;

    switch (choice) {
        case 1: {
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

        case 2:
            {
                for (auto it = vEmployee.begin(); it != vEmployee.end(); it++) {
                    it->getEmployeeDetails();
                    cout << endl;
                }
                break;
            }

        default:
            break;
    }
}


void optionEmployee(vector<employee> &vEmployee) {
    system("cls");
    int choice;
    cout << endl
         << "\n1   :   ADD AN EMPLOYEE"
         << "\n2   :   REMOVE AN EMPLOYEE"
         << "\n3   :   DISPLAY THE EMPLOYEE DETAILS"
         << "\nENTER YOUR CHOICE: ";
    cin >> choice;

    switch (choice) {
    case 1: 
        addEmployee(vEmployee);
        break;

    case 2: 
        removeEmployee(vEmployee);
        break;
    

    case 3: 
        displayEmployee(vEmployee);
        break;
    
    default:
        break;
    }
}
