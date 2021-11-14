#pragma once
#ifndef MALLEMPLOYEES_HPP
#define MALLEMPLOYEES_HPP

#include "./customDataTypes.hpp"
#include "./employee.hpp"
#include <vector>
#include "string"

class mallEmployees : public employee {
    protected:
    category empCategory;
    struct bankAccount salaryAccount;
    string UAN;
    float salary;
    int temp;

    public:
    int recognisedPersonID;
    void setUAN();
    void setCategory();
    void setBankAccount();
    void setSalary();
    void getEmployeeDetails();
    void getEmployeeSalary();
    void getBankDetails();
    bool paysalary();
    void setmallEMployee();
    void setEmployeeSalary(float Amount);

    // declare store and load database as friend functions
    friend void saveDatabase(vector<mallEmployees> &vMallEmployees);
    friend void loadDatabase(vector<mallEmployees> &vMallEmployees);
};
#endif
