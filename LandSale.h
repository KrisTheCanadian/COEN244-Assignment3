#pragma once
#include "Property.h"

class LandSale :
	public Property
{
public:
	LandSale();
	LandSale(string, string, Client, RealEstateAgent, Date, double, int);
	double getarea();
	void setarea(double);
	int getprice();
	void setprice(int);
	~LandSale();
	virtual void print() override;
private:
	double area_;
	int price_;
};

