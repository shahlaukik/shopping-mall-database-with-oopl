// Function to load database
#include "../main.hpp"
#include <fstream>
using namespace std;

// Declare functions
void loadDatabase(vector<recognisedPerson> &vRecognisedPersons);
void loadDatabase(vector<recognisedOrganisation> &vRecognisedOrganisations);
void loadDatabase(vector<shopDetails> &vShops){};
void loadDatabase(vector<employee> &vEmployees){};
void loadDatabase(vector<mallEmployees> &vMallEmployees){};
void loadDatabase(vector<transaction> &vTransactions){};
void loadDatabase(vector<payout> &vPayouts){};
void loadDatabase(vector<payment> &vPayments){};
void loadDatabase(mallBankAccount &acMall){};

void loadDatabase(vector<recognisedPerson> &vRecognisedPersons,
                  vector<recognisedOrganisation> &vRecognisedOrganisations,
                  vector<shopDetails> &vShops,
                  vector<employee> &vEmployees,
                  vector<mallEmployees> &vMallEmployees,
                  vector<transaction> &vTransactions,
                  vector<payout> &vPayouts,
                  vector<payment> &vPayments,
                  mallBankAccount &acMall) {

    loadDatabase(vRecognisedPersons);
    loadDatabase(vRecognisedOrganisations);
    loadDatabase(vShops);
    loadDatabase(vEmployees);
    loadDatabase(vMallEmployees);
    loadDatabase(vTransactions);
    loadDatabase(vPayouts);
    loadDatabase(vPayments);
    loadDatabase(acMall);
}

// Function to load recognised persons from database file
void loadDatabase(vector<recognisedPerson> &vRecognisedPersons) {

    // Open database file
    ifstream recognisedPersonsFile;
    recognisedPersonsFile.open("database/recognisedPersons.txt");

    // Read recognised persons from database file
    if (recognisedPersonsFile.is_open()) {
        recognisedPerson recognisedPerson;
        string fileLine;
        while (!recognisedPersonsFile.eof()) {
            getline(recognisedPersonsFile, fileLine);
            if (fileLine == "") {
                break;
            }
            recognisedPerson.recognisedPersonId = stoi(fileLine);
            getline(recognisedPersonsFile, fileLine);
            recognisedPerson.name = fileLine;
            getline(recognisedPersonsFile, fileLine);
            recognisedPerson.address.street = fileLine;
            getline(recognisedPersonsFile, fileLine);
            recognisedPerson.address.city = fileLine;
            getline(recognisedPersonsFile, fileLine);
            recognisedPerson.address.state = fileLine;
            getline(recognisedPersonsFile, fileLine);
            recognisedPerson.address.zip = fileLine;
            getline(recognisedPersonsFile, fileLine);
            recognisedPerson.birthDate.day = stoi(fileLine);
            getline(recognisedPersonsFile, fileLine);
            recognisedPerson.birthDate.month = stoi(fileLine);
            getline(recognisedPersonsFile, fileLine);
            recognisedPerson.birthDate.year = stoi(fileLine);
            getline(recognisedPersonsFile, fileLine);
            recognisedPerson.sex = static_cast<gender>(stoi(fileLine));
            getline(recognisedPersonsFile, fileLine);
            recognisedPerson.phoneNumber = fileLine;
            getline(recognisedPersonsFile, fileLine);
            recognisedPerson.email = fileLine;
            getline(recognisedPersonsFile, fileLine);
            if (fileLine == "") {
                vRecognisedPersons.push_back(recognisedPerson);
            } else {
                cout << "Error: Recognised persons database file corrupted" << endl;
                exit(1);
            }
        }
    } else {
        cout << "Unable to open recognised persons database file" << endl;
    }

    // Close database file
    recognisedPersonsFile.close();
}

// Function to load recognised organisations from database file
void loadDatabase(vector<recognisedOrganisation> &vRecognisedOrganisations) {

    // Open database file
    ifstream recognisedOrganisationsFile;
    recognisedOrganisationsFile.open("database/recognisedOrganisations.txt");

    // Read recognised organisations from database file
    if (recognisedOrganisationsFile.is_open()) {
        recognisedOrganisation recognisedOrganisation;
        string fileLine;
        while (!recognisedOrganisationsFile.eof()) {
            getline(recognisedOrganisationsFile, fileLine);
            if (fileLine == "") {
                break;
            }
            recognisedOrganisation.recognisedOrganisationId = stoi(fileLine);
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.registeredName = fileLine;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.registeredOrgnisationType = fileLine;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.registrationAddress.street = fileLine;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.registrationAddress.city = fileLine;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.registrationAddress.state = fileLine;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.registrationAddress.zip = fileLine;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.registrationDate.day = stoi(fileLine);
            ;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.registrationDate.month = stoi(fileLine);
            ;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.registrationDate.year = stoi(fileLine);
            ;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.phoneNumber = fileLine;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.emailId = fileLine;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.registrationId = stoi(fileLine);
            ;
            getline(recognisedOrganisationsFile, fileLine);
            recognisedOrganisation.gstn = fileLine;
            getline(recognisedOrganisationsFile, fileLine);
            if (fileLine == "") {
                vRecognisedOrganisations.push_back(recognisedOrganisation);
            } else {
                cout << "Error: Recognised organisation database file corrupted" << endl;
                exit(1);
            }
        }
    } else {
        cout << "Unable to open recognised organisations database file" << endl;
    }

    // Close database file
    recognisedOrganisationsFile.close();
}

// Function to load shops from database file
void loadDatabase(vector<shopDetails> &vShops) {

    // Open database file
    ifstream shopsFile;
    shopsFile.open("database/shops.txt");

    // Read shops from database file
    if (shopsFile.is_open()) {
        shopDetails shop;
        string fileLine;
        while (!shopsFile.eof()) {
            getline(shopsFile, fileLine);
            if (fileLine == "") {
                break;
            }
            shop.shopID = stoi(fileLine);
            getline(shopsFile, fileLine);
            shop.propertyNumber = stoi(fileLine);
            getline(shopsFile, fileLine);
            shop.floor = stoi(fileLine);
            getline(shopsFile, fileLine);
            shop.area = stoi(fileLine);
            getline(shopsFile, fileLine);
            shop.ownerRPID = stoi(fileLine);
            getline(shopsFile, fileLine);
            shop.dateOfPurchase.day = stoi(fileLine);
            getline(shopsFile, fileLine);
            shop.dateOfPurchase.month = stoi(fileLine);
            getline(shopsFile, fileLine);
            shop.dateOfPurchase.year = stoi(fileLine);
            getline(shopsFile, fileLine);
            if (fileLine == "") {
                vShops.push_back(shop);
            } else {
                cout << "Error: Shops database file corrupted" << endl;
                exit(1);
            }
        }
    } else {
        cout << "Unable to open shops database file" << endl;
    }

    // Close database file
    shopsFile.close();
}

// Function to load employees from database file
void loadDatabase(vector<employee> &vEmployees) {

    // Open database file
    ifstream employeesFile;
    employeesFile.open("database/employees.txt");

    // Read employees from database file
    if (employeesFile.is_open()) {
        employee employee;
        string fileLine;
        while (!employeesFile.eof()) {
            getline(employeesFile, fileLine);
            if (fileLine == "") {
                break;
            }
            employee.recognisedPersonId = stoi(fileLine);
            getline(employeesFile, fileLine);
            employee.name = fileLine;
            getline(employeesFile, fileLine);
            employee.address.street = fileLine;
            getline(employeesFile, fileLine);
            employee.address.city = fileLine;
            getline(employeesFile, fileLine);
            employee.address.state = fileLine;
            getline(employeesFile, fileLine);
            employee.address.zip = fileLine;
            getline(employeesFile, fileLine);
            employee.birthDate.day = stoi(fileLine);
            getline(employeesFile, fileLine);
            employee.birthDate.month = stoi(fileLine);
            getline(employeesFile, fileLine);
            employee.birthDate.year = stoi(fileLine);
            getline(employeesFile, fileLine);
            employee.sex = static_cast<gender>(stoi(fileLine));
            getline(employeesFile, fileLine);
            employee.phoneNumber = fileLine;
            getline(employeesFile, fileLine);
            employee.email = fileLine;
            getline(employeesFile, fileLine);
            employee.employeeId = stoi(fileLine);
            getline(employeesFile, fileLine);
            employee.shopId = stoi(fileLine);
            getline(employeesFile, fileLine);
            employee.supervisorEmployeeId = stoi(fileLine);
            getline(employeesFile, fileLine);
            employee.empcategory = static_cast<category>(stoi(fileLine));
            getline(employeesFile, fileLine);
            employee.emptype = static_cast<type>(stoi(fileLine));
            getline(employeesFile, fileLine);
            employee.dateOfJoining.day = stoi(fileLine);
            getline(employeesFile, fileLine);
            employee.dateOfJoining.month = stoi(fileLine);
            getline(employeesFile, fileLine);
            employee.dateOfJoining.year = stoi(fileLine);
            getline(employeesFile, fileLine);
            if (fileLine == "") {
                vEmployees.push_back(employee);
            } else {
                cout << "Error: Shops database file corrupted" << endl;
                exit(1);
            }
        }
    } else {
        cout << "Unable to open employees database file" << endl;
    }

    // Close database file
    employeesFile.close();
}

// Function to load mall employees from database file
void loadDatabase(vector<mallEmployees> &vMallEmployees) {

    // Open database file
    ifstream mallEmployeesFile;
    mallEmployeesFile.open("database/mallEmployees.txt");

    // Read employees from database file
    if (mallEmployeesFile.is_open()) {
        mallEmployees mallEmployee;
        string fileLine;
        while (!mallEmployeesFile.eof()) {
            getline(mallEmployeesFile, fileLine);
            if (fileLine == "") {
                break;
            }
            mallEmployee.recognisedPersonId = stoi(fileLine);
            getline(mallEmployeesFile, fileLine);
            mallEmployee.name = fileLine;
            getline(mallEmployeesFile, fileLine);
            mallEmployee.address.street = fileLine;
            getline(mallEmployeesFile, fileLine);
            mallEmployee.address.city = fileLine;
            getline(mallEmployeesFile, fileLine);
            mallEmployee.address.state = fileLine;
            getline(mallEmployeesFile, fileLine);
            mallEmployee.address.zip = fileLine;
            getline(mallEmployeesFile, fileLine);
            mallEmployee.birthDate.day = stoi(fileLine);
            getline(mallEmployeesFile, fileLine);
            mallEmployee.birthDate.month = stoi(fileLine);
            getline(mallEmployeesFile, fileLine);
            mallEmployee.birthDate.year = stoi(fileLine);
            getline(mallEmployeesFile, fileLine);
            mallEmployee.sex = static_cast<gender>(stoi(fileLine));
            getline(mallEmployeesFile, fileLine);
            mallEmployee.phoneNumber = fileLine;
            getline(mallEmployeesFile, fileLine);
            mallEmployee.email = fileLine;
            getline(mallEmployeesFile, fileLine);
            mallEmployee.employeeId = stoi(fileLine);
            getline(mallEmployeesFile, fileLine);
            mallEmployee.shopId = stoi(fileLine);
            getline(mallEmployeesFile, fileLine);
            mallEmployee.supervisorEmployeeId = stoi(fileLine);
            getline(mallEmployeesFile, fileLine);
            mallEmployee.empcategory = static_cast<category>(stoi(fileLine));
            getline(mallEmployeesFile, fileLine);
            mallEmployee.emptype = static_cast<type>(stoi(fileLine));
            getline(mallEmployeesFile, fileLine);
            mallEmployee.dateOfJoining.day = stoi(fileLine);
            getline(mallEmployeesFile, fileLine);
            mallEmployee.dateOfJoining.month = stoi(fileLine);
            getline(mallEmployeesFile, fileLine);
            mallEmployee.dateOfJoining.year = stoi(fileLine);
            getline(mallEmployeesFile, fileLine);
            mallEmployee.salaryAccount.bankName = fileLine;
            getline(mallEmployeesFile, fileLine);
            mallEmployee.salaryAccount.accountNumber = fileLine;
            getline(mallEmployeesFile, fileLine);
            mallEmployee.salaryAccount.ifsc = fileLine;
            getline(mallEmployeesFile, fileLine);
            mallEmployee.UAN = fileLine;
            getline(mallEmployeesFile, fileLine);
            mallEmployee.salary = stof(fileLine);
            getline(mallEmployeesFile, fileLine);
            mallEmployee.temp = stoi(fileLine);
            getline(mallEmployeesFile, fileLine);
            if (fileLine == "") {
                vMallEmployees.push_back(mallEmployee);
            } else {
                cout << "Error: Mall Employee database file corrupted" << endl;
                exit(1);
            }
        }
    } else {
        cout << "Unable to open mall employees database file" << endl;
    }

    // Close database file
    mallEmployeesFile.close();
}

// Function to load transactions from database file
void loadDatabase(vector<transaction> &vTransactions) {

    // Open database file
    ifstream transactionsFile;
    transactionsFile.open("database/transactions.txt");

    // Read transactions from database file
    if (transactionsFile.is_open()) {
        transaction transaction;
        string fileLine;
        while (!transactionsFile.eof()) {
            getline(transactionsFile, fileLine);
            if (fileLine == "") {
                break;
            }
            transaction.amount = stof(fileLine);
            getline(transactionsFile, fileLine);
            transaction.trxnDate.day = stoi(fileLine);
            getline(transactionsFile, fileLine);
            transaction.trxnDate.month = stoi(fileLine);
            getline(transactionsFile, fileLine);
            transaction.trxnDate.year = stoi(fileLine);
            getline(transactionsFile, fileLine);
            transaction.trxnTime.hour = stoi(fileLine);
            getline(transactionsFile, fileLine);
            transaction.trxnTime.minute = stoi(fileLine);
            getline(transactionsFile, fileLine);
            transaction.trxnTime.second = stoi(fileLine);
            getline(transactionsFile, fileLine);
            transaction.type = static_cast<typeOfTrxn>(stoi(fileLine));
            ;
            getline(transactionsFile, fileLine);
            transaction.referenceNumber = fileLine;
            getline(transactionsFile, fileLine);
            if (fileLine == "") {
                vTransactions.push_back(transaction);
            } else {
                cout << "Error: Transactions database file corrupted" << endl;
                exit(1);
            }
        }
    } else {
        cout << "Unable to open transactions database file" << endl;
    }

    // Close database file
    transactionsFile.close();
}

// Function to load payouts from database file
void loadDatabase(vector<payout> &vPayouts) {

    // Open database file
    ifstream payoutsFile;
    payoutsFile.open("database/payouts.txt");

    // Read payouts from database file
    if (payoutsFile.is_open()) {
        payout payout;
        string fileLine;
        while (!payoutsFile.eof()) {
            getline(payoutsFile, fileLine);
            if (fileLine == "") {
                break;
            }
            payout.payoutId = stoi(fileLine);
            getline(payoutsFile, fileLine);
            payout.invoiceId = stoi(fileLine);
            getline(payoutsFile, fileLine);
            payout.transaction.amount = stof(fileLine);
            getline(payoutsFile, fileLine);
            payout.transaction.trxnDate.day = stoi(fileLine);
            getline(payoutsFile, fileLine);
            payout.transaction.trxnDate.month = stoi(fileLine);
            getline(payoutsFile, fileLine);
            payout.transaction.trxnDate.year = stoi(fileLine);
            getline(payoutsFile, fileLine);
            payout.transaction.trxnTime.hour = stoi(fileLine);
            getline(payoutsFile, fileLine);
            payout.transaction.trxnTime.minute = stoi(fileLine);
            getline(payoutsFile, fileLine);
            payout.transaction.trxnTime.second = stoi(fileLine);
            getline(payoutsFile, fileLine);
            payout.transaction.type = static_cast<typeOfTrxn>(stoi(fileLine));
            getline(payoutsFile, fileLine);
            payout.transaction.referenceNumber = fileLine;
            getline(payoutsFile, fileLine);
            payout.description = fileLine;
            getline(payoutsFile, fileLine);
            payout.trxnState = static_cast<trxnState>(stoi(fileLine));
            getline(payoutsFile, fileLine);
            if (fileLine == "") {
                vPayouts.push_back(payout);
            } else {
                cout << "Error: Payouts database file corrupted" << endl;
                exit(1);
            }
        }
    } else {
        cout << "Unable to open payouts database file" << endl;
    }

    // Close database file
    payoutsFile.close();
}

// Function to load payments from database file
void loadDatabase(vector<payment> &vPayments) {

    // Open database file
    ifstream paymentsFile;
    paymentsFile.open("database/payments.txt");

    // Read payments from database file
    if (paymentsFile.is_open()) {
        payment payment;
        string fileLine;
        while (!paymentsFile.eof()) {
            getline(paymentsFile, fileLine);
            if (fileLine == "") {
                break;
            }
            payment.paymentID = stoi(fileLine);
            getline(paymentsFile, fileLine);
            payment.paymentFrom = fileLine;
            getline(paymentsFile, fileLine);
            payment.description = fileLine;
            getline(paymentsFile, fileLine);
            payment.accTransaction.amount = stof(fileLine);
            getline(paymentsFile, fileLine);
            payment.accTransaction.trxnDate.day = stoi(fileLine);
            getline(paymentsFile, fileLine);
            payment.accTransaction.trxnDate.month = stoi(fileLine);
            getline(paymentsFile, fileLine);
            payment.accTransaction.trxnDate.year = stoi(fileLine);
            getline(paymentsFile, fileLine);
            payment.accTransaction.trxnTime.hour = stoi(fileLine);
            getline(paymentsFile, fileLine);
            payment.accTransaction.trxnTime.minute = stoi(fileLine);
            getline(paymentsFile, fileLine);
            payment.accTransaction.trxnTime.second = stoi(fileLine);
            getline(paymentsFile, fileLine);
            payment.accTransaction.type = static_cast<typeOfTrxn>(stoi(fileLine));
            getline(paymentsFile, fileLine);
            payment.accTransaction.referenceNumber = fileLine;
            getline(paymentsFile, fileLine);
            payment.paymentState = static_cast<trxnState>(stoi(fileLine));
            getline(paymentsFile, fileLine);
            if (fileLine == "") {
                vPayments.push_back(payment);
            } else {
                cout << "Error: Payments database file corrupted" << endl;
                exit(1);
            }
        }
    } else {
        cout << "Unable to open payments database file" << endl;
    }

    // Close database file
    paymentsFile.close();
}

// Function to to load mall bank account from database file
void loadDatabase(mallBankAccount &mBankAccount) {

    // Open database file
    ifstream mBankAccountFile;
    mBankAccountFile.open("database/mallBankAccount.txt");

    // Read mall bank account from database file
    if (mBankAccountFile.is_open() && !mBankAccountFile.eof()) {
        string fileLine;
        getline(mBankAccountFile, fileLine);
        mBankAccount.mallAccount.bankName = fileLine;
        getline(mBankAccountFile, fileLine);
        mBankAccount.mallAccount.accountNumber = fileLine;
        getline(mBankAccountFile, fileLine);
        mBankAccount.mallAccount.ifsc = fileLine;
        getline(mBankAccountFile, fileLine);
        mBankAccount.balance = stof(fileLine);
        getline(mBankAccountFile, fileLine);
        if (fileLine == "") {
            // successful read
        } else {
            cout << "Error: Mall bank account database file corrupted" << endl;
            exit(1);
        }
    } else {
        cout << "Unable to open mall bank account database file" << endl;
    }

    // Close database file
    mBankAccountFile.close();
}