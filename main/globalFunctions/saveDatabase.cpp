// Function to save database file

// Include header file
#include "../main.hpp"
using namespace std;

// Declare functions
void saveDatabase(vector<recognisedPerson> &vRecognisedPersons);
void saveDatabase(vector<recognisedOrganisation> &vRecognisedOrganisations);
void saveDatabase(vector<shopDetails> &vShops);
void saveDatabase(vector<employee> &vEmployees);
void saveDatabase(vector<mallEmployees> &vMallEmployees);
void saveDatabase(vector<transaction> &vTransactions);
void saveDatabase(vector<payout> &vPayouts);
void saveDatabase(vector<payment> &vPayments);
void saveDatabase(mallBankAccount &acMall);

// Main function
void saveDatabase(vector<recognisedPerson> &vRecognisedPersons,
                  vector<recognisedOrganisation> &vRecognisedOrganisations,
                  vector<shopDetails> &vShops,
                  vector<employee> &vEmployees,
                  vector<mallEmployees> &vMallEmployees,
                  vector<transaction> &vTransactions,
                  vector<payout> &vPayouts,
                  vector<payment> &vPayments, 
                  mallBankAccount &acMall) {

    // Save database file
    saveDatabase(vRecognisedPersons);
    saveDatabase(vRecognisedOrganisations);
    saveDatabase(vShops);
    saveDatabase(vEmployees);
    saveDatabase(vMallEmployees);
    saveDatabase(vTransactions);
    saveDatabase(vPayouts);
    saveDatabase(vPayments);
    saveDatabase(acMall);
}

// Function to save recognised persons to database file
void saveDatabase(vector<recognisedPerson> &vRecognisedPersons) {

    // Open database file
    ofstream recognisedPersonsFile;
    recognisedPersonsFile.open("database/recognisedPersons.txt");

    // Write recognised persons to database file
    for (int i = 0; i < vRecognisedPersons.size(); i++) {
        recognisedPersonsFile << vRecognisedPersons[i].recognisedPersonId << endl;
        recognisedPersonsFile << vRecognisedPersons[i].name << endl;
        recognisedPersonsFile << vRecognisedPersons[i].address.street << endl;
        recognisedPersonsFile << vRecognisedPersons[i].address.city << endl;
        recognisedPersonsFile << vRecognisedPersons[i].address.state << endl;
        recognisedPersonsFile << vRecognisedPersons[i].address.zip << endl;
        recognisedPersonsFile << vRecognisedPersons[i].birthDate.day << endl;
        recognisedPersonsFile << vRecognisedPersons[i].birthDate.month << endl;
        recognisedPersonsFile << vRecognisedPersons[i].birthDate.year << endl;
        recognisedPersonsFile << vRecognisedPersons[i].sex << endl;
        recognisedPersonsFile << vRecognisedPersons[i].phoneNumber << endl;
        recognisedPersonsFile << vRecognisedPersons[i].email << endl;
        recognisedPersonsFile << endl;
    }

    // Close database file
    recognisedPersonsFile.close();
}

// Function to save recognised origanisation to database file
void saveDatabase(vector<recognisedOrganisation> &vRecognisedOrganisations) {

    // Open database file
    ofstream recognisedOrganisationsFile;
    recognisedOrganisationsFile.open("database/recognisedOrganisations.txt");

    // Write recognised organisations to database file
    for (int i = 0; i < vRecognisedOrganisations.size(); i++) {
        recognisedOrganisationsFile << vRecognisedOrganisations[i].recognisedOrganisationId << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].registeredName << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].registeredOrgnisationType << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].registrationAddress.street << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].registrationAddress.city << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].registrationAddress.state << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].registrationAddress.zip << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].registrationDate.day << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].registrationDate.month << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].registrationDate.year << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].phoneNumber << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].emailId << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].registrationId << endl;
        recognisedOrganisationsFile << vRecognisedOrganisations[i].gstn << endl;
        recognisedOrganisationsFile << endl;
    }

    // Close database file
    recognisedOrganisationsFile.close();
}

// Function to save shops to database file
void saveDatabase(vector<shopDetails> &vShops) {

    // Open database file
    ofstream shopsFile;
    shopsFile.open("database/shops.txt");

    // Write shops to database file
    for (int i = 0; i < vShops.size(); i++) {
        shopsFile << vShops[i].shopID << endl;
        shopsFile << vShops[i].propertyNumber << endl;
        shopsFile << vShops[i].floor << endl;
        shopsFile << vShops[i].area << endl;
        shopsFile << vShops[i].ownerRPID << endl;
        shopsFile << vShops[i].dateOfPurchase.day << endl;
        shopsFile << vShops[i].dateOfPurchase.month << endl;
        shopsFile << vShops[i].dateOfPurchase.year << endl;
        shopsFile << endl;
    }

    // Close database file
    shopsFile.close();
}

// Function to save employees to database file
void saveDatabase(vector<employee> &vEmployees) {

    // Open database file
    ofstream employeesFile;
    employeesFile.open("database/employees.txt");

    // Write employees to database file
    for (int i = 0; i < vEmployees.size(); i++) {
        employeesFile << vEmployees[i].recognisedPersonId << endl;
        employeesFile << vEmployees[i].name << endl;
        employeesFile << vEmployees[i].address.street << endl;
        employeesFile << vEmployees[i].address.city << endl;
        employeesFile << vEmployees[i].address.state << endl;
        employeesFile << vEmployees[i].address.zip << endl;
        employeesFile << vEmployees[i].birthDate.day << endl;
        employeesFile << vEmployees[i].birthDate.month << endl;
        employeesFile << vEmployees[i].birthDate.year << endl;
        employeesFile << vEmployees[i].sex << endl;
        employeesFile << vEmployees[i].phoneNumber << endl;
        employeesFile << vEmployees[i].email << endl;
        employeesFile << vEmployees[i].employeeId << endl;
        employeesFile << vEmployees[i].shopId << endl;
        employeesFile << vEmployees[i].supervisorEmployeeId << endl;
        employeesFile << vEmployees[i].empcategory << endl;
        employeesFile << vEmployees[i].emptype << endl;
        employeesFile << vEmployees[i].dateOfJoining.day << endl;
        employeesFile << vEmployees[i].dateOfJoining.month << endl;
        employeesFile << vEmployees[i].dateOfJoining.year << endl;
        employeesFile << endl;
    }

    // Close database file
    employeesFile.close();
}

// Function to save mall employees to database file
void saveDatabase(vector<mallEmployees> &vMallEmployees) {

    // Open database file
    ofstream mallEmployeesFile;
    mallEmployeesFile.open("database/mallEmployees.txt");

    // Write mall employees to database file
    for (int i = 0; i < vMallEmployees.size(); i++) {
        mallEmployeesFile << vMallEmployees[i].recognisedPersonId << endl;
        mallEmployeesFile << vMallEmployees[i].name << endl;
        mallEmployeesFile << vMallEmployees[i].address.street << endl;
        mallEmployeesFile << vMallEmployees[i].address.city << endl;
        mallEmployeesFile << vMallEmployees[i].address.state << endl;
        mallEmployeesFile << vMallEmployees[i].address.zip << endl;
        mallEmployeesFile << vMallEmployees[i].birthDate.day << endl;
        mallEmployeesFile << vMallEmployees[i].birthDate.month << endl;
        mallEmployeesFile << vMallEmployees[i].birthDate.year << endl;
        mallEmployeesFile << vMallEmployees[i].sex << endl;
        mallEmployeesFile << vMallEmployees[i].phoneNumber << endl;
        mallEmployeesFile << vMallEmployees[i].email << endl;
        mallEmployeesFile << vMallEmployees[i].employeeId << endl;
        mallEmployeesFile << vMallEmployees[i].shopId << endl;
        mallEmployeesFile << vMallEmployees[i].supervisorEmployeeId << endl;
        mallEmployeesFile << vMallEmployees[i].empcategory << endl;
        mallEmployeesFile << vMallEmployees[i].emptype << endl;
        mallEmployeesFile << vMallEmployees[i].dateOfJoining.day << endl;
        mallEmployeesFile << vMallEmployees[i].dateOfJoining.month << endl;
        mallEmployeesFile << vMallEmployees[i].dateOfJoining.year << endl;
        mallEmployeesFile << vMallEmployees[i].salaryAccount.bankName << endl;
        mallEmployeesFile << vMallEmployees[i].salaryAccount.accountNumber << endl;
        mallEmployeesFile << vMallEmployees[i].salaryAccount.ifsc << endl;
        mallEmployeesFile << vMallEmployees[i].UAN << endl;
        mallEmployeesFile << vMallEmployees[i].salary << endl;
        mallEmployeesFile << vMallEmployees[i].temp << endl;
        mallEmployeesFile << endl;
    }

    // Close database file
    mallEmployeesFile.close();
}

// Function to save transactions to database file
void saveDatabase(vector<transaction> &vTransactions) {

    // Open database file
    ofstream transactionsFile;
    transactionsFile.open("database/transactions.txt");

    // Write transactions to database file
    for (int i = 0; i < vTransactions.size(); i++) {
        transactionsFile << vTransactions[i].amount << endl;
        transactionsFile << vTransactions[i].trxnDate.day << endl;
        transactionsFile << vTransactions[i].trxnDate.month << endl;
        transactionsFile << vTransactions[i].trxnDate.year << endl;
        transactionsFile << vTransactions[i].trxnTime.hour << endl;
        transactionsFile << vTransactions[i].trxnTime.minute << endl;
        transactionsFile << vTransactions[i].trxnTime.second << endl;
        transactionsFile << vTransactions[i].type << endl;
        transactionsFile << vTransactions[i].referenceNumber << endl;
        transactionsFile << endl;
    }

    // Close database file
    transactionsFile.close();
}

// Function to save payouts to database file
void saveDatabase(vector<payout> &vPayouts) {

    // Open database file
    ofstream payoutsFile;
    payoutsFile.open("database/payouts.txt");

    // Write payouts to database file
    for (int i = 0; i < vPayouts.size(); i++) {
        payoutsFile << vPayouts[i].payoutId << endl;
        payoutsFile << vPayouts[i].invoiceId << endl;
        payoutsFile << vPayouts[i].transaction.amount << endl;
        payoutsFile << vPayouts[i].transaction.trxnDate.day << endl;
        payoutsFile << vPayouts[i].transaction.trxnDate.month << endl;
        payoutsFile << vPayouts[i].transaction.trxnDate.year << endl;
        payoutsFile << vPayouts[i].transaction.trxnTime.hour << endl;
        payoutsFile << vPayouts[i].transaction.trxnTime.minute << endl;
        payoutsFile << vPayouts[i].transaction.trxnTime.second << endl;
        payoutsFile << vPayouts[i].transaction.type << endl;
        payoutsFile << vPayouts[i].transaction.referenceNumber << endl;
        payoutsFile << vPayouts[i].description << endl;
        payoutsFile << vPayouts[i].trxnState << endl;
        payoutsFile << endl;
    }

    // Close database file
    payoutsFile.close();
}

// Function to save payments to database file
void saveDatabase(vector<payment> &vPayments) {

    // Open database file
    ofstream paymentsFile;
    paymentsFile.open("database/payments.txt");

    // Write payments to database file
    for (int i = 0; i < vPayments.size(); i++) {
        paymentsFile << vPayments[i].paymentID << endl;
        paymentsFile << vPayments[i].paymentFrom << endl;
        paymentsFile << vPayments[i].description << endl;
        paymentsFile << vPayments[i].accTransaction.amount << endl;
        paymentsFile << vPayments[i].accTransaction.trxnDate.day << endl;
        paymentsFile << vPayments[i].accTransaction.trxnDate.month << endl;
        paymentsFile << vPayments[i].accTransaction.trxnDate.year << endl;
        paymentsFile << vPayments[i].accTransaction.trxnTime.hour << endl;
        paymentsFile << vPayments[i].accTransaction.trxnTime.minute << endl;
        paymentsFile << vPayments[i].accTransaction.trxnTime.second << endl;
        paymentsFile << vPayments[i].accTransaction.type << endl;
        paymentsFile << vPayments[i].accTransaction.referenceNumber << endl;
        paymentsFile << vPayments[i].paymentState << endl;
        paymentsFile << endl;
    }

    // Close database file
    paymentsFile.close();
}

// Function to save mall bank account to database file
void saveDatabase(mallBankAccount &mBankAccount) {

    // Open database file
    ofstream mallBankAccountFile;
    mallBankAccountFile.open("database/mallBankAccount.txt");

    // Write mall bank account to database file
    mallBankAccountFile << mBankAccount.mallAccount.bankName << endl;
    mallBankAccountFile << mBankAccount.mallAccount.accountNumber << endl;
    mallBankAccountFile << mBankAccount.mallAccount.ifsc << endl;
    mallBankAccountFile << mBankAccount.balance << endl;

    // Close database file
    mallBankAccountFile.close();
}