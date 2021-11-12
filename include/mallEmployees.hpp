#ifndef MALLEMPLOYEES_H
#define MALLEMPLOYEES_H
#pragma once
#include "./customDataTypes.hpp"

#include "string"

class mallEmployees : public employee {
    protected:
    enum category { partTime,
                    fullTime };
    struct bankAccount salaryAccount;
    string UAN;
    float salary;
    int temp;

    public:
    int recognisedPersonID;
    void setUAN();
    void setCategory();
    void setBankAccount();
    void getEmployeeDetails();
    void getEmployeeSalary();
    void getBankDetails();
    bool paysalary();
};
#endif