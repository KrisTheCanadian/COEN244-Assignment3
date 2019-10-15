#pragma once
#include "Property.h"

class HouseSale 
	:public Property
{
public:
	HouseSale();
	HouseSale(string, string, Client, RealEstateAgent, Date, int, int, int);
	int getbuildyear();
	void setbuildyear(int);
	int getroomno();
	void setroomno(int);
	int getprice();
	void setprice(int);
	~HouseSale();
	virtual void print() override;
private:
	int year_of_build_;
	int no_of_rooms_;
	int price_;
};

