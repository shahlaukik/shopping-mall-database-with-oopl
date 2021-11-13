#pragma once
#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP
#include "./customDataTypes.hpp"
#include "./recognisedPerson.hpp"
class employee : public recognisedPerson {
    protected:
    int employeeId, shopId, supervisorEmployeeId;
    enum category { parttime,
                    fulltime } empcategory;
    enum type { direct,
                contracted } emptype;
    struct date dateOfJoining;

    public:
    void setemployeeId();
    void setShopId();
    void setSupervisorEmployeeId();
    void setCategory();
    void setType();
    void setEmployeeDetails(); //to 
    
    void getemployeeId();
    void getShopId();
    void getSupervisorEmployeeId();
    void getCategory();
    void getType();
    void getDateOfJoining();
    void getEmployeeDetails();
    int returnEmployeeId();
    
};
#endif