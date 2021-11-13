#include "../include/shop.hpp"
#include <iostream>
#include <string>
using namespace std;

void shop::setShopId(){
    shopId=generateID();
}
void shop::setPropertyId(){
    propertyId=generateID();
}
void shop::setRevenue(){
    cout<<"Enter the Revenue:";
    cin>>revenue;
}
void shop::setMonthlyMaintenance()
{
    cout<<"Enter the Monthyly Maintenance:";
    cin>>monthlyMaintenance;
}
void shop::setRevenueSharingPercentage()
{
    cout<<"Enter the Revenue Sharing Percentage:";
    cin>>revenueSharingPercentage;
}
void shop::getShopId(){
    cout<<"The Shop ID is :"<< shopId << endl;
}
void shop::getPropertyId()
{
    cout<<"The Property ID is :"<< propertyId << endl;
}
void shop::getMonthlyMaintenance()
{
    cout<<"The Monthly Maintenance of the shop is :" << monthlyMaintenance << endl;
}
void shop::getRevenue()
{
    cout<<"The Revenue is :" << revenue << endl;
}
void shop::getRevenueSharingPercentage()
{
    cout<<"The Revenue Sharing Percentage is:"<< revenueSharingPercentage << endl;
}
void shop::getShopDetails()
{
    cout<<"The Shop Details are:\n";
    getShopId();
    getPropertyId();
    getRevenue();
    getMonthlyMaintenance();
    getRevenueSharingPercentage();
}
void shop::setShopDetails()
{
    cout<< "Enters the shop details :"<<endl;
    setShopId();
    setPropertyId();
    setRevenue();
    setMonthlyMaintenance();
    setRevenueSharingPercentage();
}