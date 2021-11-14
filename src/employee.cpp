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

void employee::getDateOfJoining() {
    cout << " The date of joining is :" << dateOfJoining.day << "/" << dateOfJoining.month << "/" << dateOfJoining.year << endl;
}
void employee::getemployeeId() {
    cout << "The employee Id is :" << employeeId << endl;
}

void employee::getShopId() {
    cout << "The Shop ID is :" << shopId << endl;
}
void employee::getSupervisorEmployeeId() {
    cout << " The Supervisor Employee id is : " << supervisorEmployeeId << endl;
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
    getDateOfJoining();
    getType(emptype);
    getCategory(empcategory);
}

int employee::returnEmployeeId() {
    return employeeId;
}

void employee::setEmpCategory() {
    empcategory = setCategory();
}
void employee::setEmpType() {
    emptype = setType();
}

type employee::returnEmpType() {
    return emptype;
}

category employee::returnEmpCategory() {
    return empcategory;
}