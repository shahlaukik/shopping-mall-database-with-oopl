#include "../include/employee.hpp"
#include <iostream>
#include <string>
using namespace std;

void employee::setemployeeId() {
    employeeId = generateID();
}
void employee::setShopId() {
    shopId = generateID();
}
void employee::setSupervisorEmployeeId() {
    supervisorEmployeeId = generateID();
}
void employee::setCategory() {
    cout << "Employee is which category?\n";
    cout << "1. Part Time\n2. Full time\n";
    int temp;
    cout << "Choose: ";
    cin >> temp;
    (temp == 1) ? (empcategory = parttime) : (empcategory = fulltime);
}
void employee::setType() {
    cout << "Enter the Employee type:\n";
    cout << "1. Direct\n2. Contracted\n";
    int temp;
    cout << "Choose: ";
    cin >> temp;
    (temp == 1) ? (emptype = direct) : (emptype = contracted);
}
void employee::getDateOfJoining() {
    cout << " The date of joining is :" << dateOfJoining.day << "/" << dateOfJoining.month << "/" << dateOfJoining.year << endl;
}
void employee::getemployeeId() {
    cout << "The employee Id is :" << employeeId << endl;
}
void employee::getCategory() {
    if (empcategory == parttime)
        cout << "Category: Part Time\n";
    else
        cout << "Category: Full time\n";
}
void employee::getShopId() {
    cout << "The Shop ID is :" << shopId << endl;
}
void employee::getSupervisorEmployeeId() {
    cout << " The Supervisor Employee id is : " << supervisorEmployeeId << endl;
}
void employee::getType() {
    if (emptype == direct)
        cout << "Type : Direct\n";
    else
        cout << "Type : Contracted\n";
}
void employee::setEmployeeDetails() {
    cout << "Enter the Employee details :\n";
    setemployeeId();
    setShopId();
    setSupervisorEmployeeId();
    setCategory();
    setType();
    dateOfJoining = setDate();
}
void employee::getEmployeeDetails() {
    cout << "The Employee details are:\n";
    getemployeeId();
    getShopId();
    getSupervisorEmployeeId();
    getCategory();
    getType();
    getDateOfJoining();
}

int employee::returnEmployeeId() {
    return employeeId;
}