#pragma once
#ifndef MALLEMPLOYEES_HPP
#define MALLEMPLOYEES_HPP

#include "./customDataTypes.hpp"
#include "./employee.hpp"
#include "string"
#include <vector>

class mallEmployees : public employee {
    protected:
    struct bankAccount salaryAccount;
    string UAN;
    float salary;
    int temp;

    public:
    int recognisedPersonID;
    void setUAN();
    void setBankAccount();
    void getEmployeeDetails();
    void getEmployeeSalary();
    void getBankDetails();
    void setmallEMployee();
    void setEmployeeSalary(float Amount);

    // declare store and load database as friend functions
    friend void saveDatabase(vector<mallEmployees> &vMallEmployees);
    friend void loadDatabase(vector<mallEmployees> &vMallEmployees);
};
#endif
