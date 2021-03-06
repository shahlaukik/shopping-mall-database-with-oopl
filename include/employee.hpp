#pragma once
#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP
#include "./customDataTypes.hpp"
#include "./recognisedPerson.hpp"
#include <vector>
class employee : public recognisedPerson {
    protected:
    int employeeId, shopId, supervisorEmployeeId;
    category empcategory;
    type emptype;
    struct date dateOfJoining;

    public:
    void setemployeeId();
    void setShopId();
    void setSupervisorEmployeeId();

    void setEmployeeDetails(); //to

    void getemployeeId();
    void getShopId();
    void getSupervisorEmployeeId();

    void getDateOfJoining();
    void getEmployeeDetails();
    int returnEmployeeId();

    void setEmpCategory();
    void setEmpType();
    category returnEmpCategory();
    type returnEmpType();

    // declare store and load database as friend functions
    friend void saveDatabase(vector<employee> &vEmployees);
    friend void loadDatabase(vector<employee> &vEmployees);
};
#endif