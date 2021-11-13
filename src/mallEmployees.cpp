#include "../include/mallEmployees.hpp"
#include "../include/customDataTypes.hpp"

#include <iostream>
#include <string>
using namespace std;

//function to take UAN number
void mallEmployees::setUAN() {
    cout << "Give the UAN number of the employee: ";
    cin >> UAN;
}

//Function to take category
void mallEmployees::setCategory() {
    cout << "Employee is which category?\n";
    cout << "1. Part Time\n2. Full time\n";
    cout << "Choose: ";
    cin >> temp;
    (temp == 1) ? (empCategory = partTime) : (empCategory = fullTime);
}

//Function to take Bank detals
void mallEmployees::setBankAccount() {
    cout << "Give the following Bank details: \n";
    cout << "Give Bank name: ";
    cin >> salaryAccount.bankName;
    cout << "Account number: ";
    cin >> salaryAccount.accountNumber;
    cout << "IFSC code: ";
    cin >> salaryAccount.ifsc;
}

//Function to print Details of Employee
void mallEmployees::getEmployeeDetails() {

    cout << "The below are the details of the employee\n";
    // putData();                        //Print data from Employee Class
    cout << "Additional Details: \n"; //Prints details from this class
    cout << "Employee Salary: " << salary;
    cout << "Employee UAN: " << UAN;
    if (empCategory == partTime)
        cout << "Category: Part Time\n";
    else
        cout << "Category: Full time\n";
}

//Function to print Employee salary
void mallEmployees::getEmployeeSalary() {
    cout << "The Employee salary is: " << salary;
}

//Function to print Bank Details
void mallEmployees::getBankDetails() {
    cout << "The bank details of the employee are: \n";
    cout << "Bank Name: " << salaryAccount.bankName << endl;
    cout << "Account number: " << salaryAccount.accountNumber << endl;
    cout << "IFSC code: " << salaryAccount.ifsc << endl;
}

void mallEmployees::setmallEMployee() {

    cout << "Give the details as asked\n";
    this->employee::setEmployeeDetails();
    setUAN();
    setCategory();
    setBankAccount();
}

//Function to process the salary of the employee
bool mallEmployees::paysalary() {
    cout << "The salary of the employee for this month is being processed\n";
    cout << "The transaction ID is: " << rand();
    return true;
}

//Function to take Salary
void mallEmployees::setSalary() {

    cout << "Give the salary: ";
    cin >> salary;
}