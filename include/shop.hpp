#pragma once
#ifndef SHOP_H
#define SHOP_H
#include "./customDataTypes.hpp"

#include "string"
#include <iostream>
using namespace std;
class shop
{
protected:
int shopId,propertyId;
float revenue,monthlyMaintenance,revenueSharingPercentage;
public:
void setShopId();
void setPropertyId();
void setRevenue();
void setMonthlyMaintenance();
void setRevenueSharingPercentage();
void getShopId();
void getPropertyId();
void getRevenue();
void getMonthlyMaintenance();
void getRevenueSharingPercentage();

void setShopDetails();
void getShopDetails();

};
#endif