#pragma once
#include "Property.h"
class ApartmentSale 
	:public Property
{
public:
	ApartmentSale();
	ApartmentSale(string, string, Client, RealEstateAgent, Date, int, int, int, int);
	int getbuildyear();
	void setbuildyear(int);
	int getrooms();
	void setrooms(int);
	int getcondofee();
	void setcondofee(int);
	int getprice();
	void setprice(int);
	~ApartmentSale();
	virtual void print() override;
private:
	int year_of_build_;
	int no_of_rooms_;
	int condominium_fee_;
	int price_;
};

