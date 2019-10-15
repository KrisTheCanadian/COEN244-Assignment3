#pragma once
#include "Property.h"

class LandSale :
	public Property
{
public:
	LandSale();
	LandSale(string, string, Client, RealEstateAgent, Date, double, int);
	~LandSale();
	virtual void print() override;
private:
	double area_;
	int price_;
};

