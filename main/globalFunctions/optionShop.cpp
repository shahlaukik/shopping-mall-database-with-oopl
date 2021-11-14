#include "../../include/shopDetails.hpp"
#include <iostream>
#include <vector>
using namespace std;

//function to add Shop Details

void addShopDetails(vector<shopDetails> &vShopDetails) {
    shopDetails newShop;
    newShop.setShopID();
    newShop.setPropertyNumber();
    newShop.setFloor();
    newShop.setArea();
    newShop.setOwnerRPID();
    newShop.setDateOfPurchase();       
    vShopDetails.push_back(newShop);    //all the details of a new shop have been added
}

//function to delete any Shop Details

bool removeShopDetails(vector<shopDetails> &vShopDetails) {

    int inputId;
    cout << endl
         << "Enter the Shop's ID: ";
    cin >> inputId;

    for (auto it = vShopDetails.begin(); it != vShopDetails.end(); it++) {
        int tempId = it->returnShopID();          //returns shop ID 
        if (tempId == inputId) {
            cout << "\n The Shop with the ID "
                 << (*it).returnShopID() << " has been removed."; 
            vShopDetails.erase(it);        //the shop has now been removed using the modifier erase           
            return true;
            break;
        }
    }
    return false;
}


//function to display the details

void displayShopDetails(vector<shopDetails> &vShopDetails) {
    int choice;
    cout << endl
         << "\n1    :   SEARCH BY SHOP ID"
         << "\n2    :   DISPLAY ALL"
         << "\nENTER YOUR CHOICE: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int input;
            cout << "\nEnter the ID to display the Shop details: ";
            cin >> input;

            for (auto it = vShopDetails.begin(); it != vShopDetails.end(); it++) {
                int tempId = it->returnShopID();

                if (tempId == input) {
                    it->getDetails();
                    break;
                }
            }
        }

        case 2:
            {
                for (auto it = vShopDetails.begin(); it != vShopDetails.end(); it++) {
                    it->getDetails();
                    cout << endl;
                }
                break;
            }

        default:
            break;
    }
}


void optionShop(vector<shopDetails> &vShopDetails)
{
    int choice;
    cout << endl
         << "\n1   :   ADD A SHOP"
         << "\n2   :   REMOVE A SHOP"
         << "\n3   :   DISPLAY SHOP DETAILS"
         << "ENTER YOUR CHOICE: ";
    cin >> choice;

    switch (choice) {
    case 1: 
        addShopDetails(vShopDetails);
        break;

    case 2: 
        removeShopDetails(vShopDetails);
        break;
    

    case 3: 
        displayShopDetails(vShopDetails);
        break;
    
    default:
        break;
    }
}