#pragma once
#ifndef MALLEMPLOYEES_HPP
#define MALLEMPLOYEES_HPP

#include "./customDataTypes.hpp"
#include "./employee.hpp"
#include "string"

class mallEmployees : public employee {
    protected:
    enum category { partTime,
                    fullTime } empCategory;
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
};
#endif
