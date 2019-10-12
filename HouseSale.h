#pragma once
#include "Property.h"

class HouseSale :
	public Property
{
public:
	HouseSale();
	HouseSale(string, string, Client, RealEstateAgent, Date, int, int, int);
	~HouseSale();
	virtual print();
private:
	int year_of_build_;
	int no_of_rooms_;
	int price_;
};

