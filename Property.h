#pragma once
#include "Client.h"
#include "RealEstateAgent.h"

using namespace std;

class Property
{
public:
	Property();
	Property(string, string, Client, RealEstateAgent*, Date);
	string getstreetaddy();
	void setstreetaddy(string);
	string getcityname();
	void setcityname(string);
	Client* getseller();
	void setseller(Client*);
	Client* getbuyer();
	void setbuyer(Client*);
	RealEstateAgent* getagent();
	void setagent(RealEstateAgent*);
	Date getdate();
	void setdate(Date);
	~Property();
	virtual print();
private:
	string street_address_;
	string cityname_;
	Client* seller_;
	Client* buyer_;
	RealEstateAgent* agent_;
	Date listingdate_;
};

