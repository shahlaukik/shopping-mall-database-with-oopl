# Shopping-Mall-Database-With-OOPS

**_Shopping Mall Database Management System using the concepts of OOPS - An OOPL Project, IIIT Gwalior_**

## Features Provided

- Add/Remove/Display Person
  - ADD PERSON
  - REMOVE PERSON
  - DISPLAY PERSON-DETAILS
- Add/Remove/Display Organisation
  - ADD Organisation
  - REMOVE Organisation
  - DISPLAY Organisation-DETAILS
- Add/Remove/Display Shop
  - ADD A SHOP
  - REMOVE A SHOP
  - DISPLAY SHOP DETAILS
- Add/Remove/Display Employee
  - ADD AN EMPLOYEE
  - REMOVE AN EMPLOYEE
  - DISPLAY THE EMPLOYEE DETAILS
- Add/Remove/Display Mall Employee
  - ADD EMPLOYEE
  - REMOVE EMPLOYEE
  - DISPLAY EMPLOYEE
- Edit MallAccount Details
  - DEPOSIT
  - WITHDRAW
- Finance Related
  - ACCEPT PAYMENT
  - MAKE PAYOUT
  - PAY SALARY

## Classes Implemented

#### recognisedPerson

This class consists of all the Employees, Owners and other person related to the mall

#### recognisedOrganization

This class holds the information of all the organizations that are related to the mall.

#### Employee

This class holds the information of the employees and is inherited from Recognised Person class.

#### mallEmployee

This class holds all the information of direct employees. His personal information will be inherited from the parent class Recognised Person.

#### shopDetails

This class consists basic information of a shop and its ownership.

#### mallBankAccount

Mall bank account is implemented in this class with deposit and withdraw methods to maintain balance

#### Payout

Payments made by the mall to the venders are handled by this class.

#### Payment

This class handles payments made to the mall by all originators.

## REFERENCES

[Store class objects](https://www.geeksforgeeks.org/readwrite-class-objects-fromto-file-c/)

[File Handling](https://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm)

[Vectors](https://www.cplusplus.com/reference/vector/vector/)

[What are header files and how to handle them?](https://stackoverflow.com/questions/6618921/calling-a-function-from-another-file-in-the-same-directory-in-c)
