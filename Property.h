#pragma once
#include "Client.h"
#include "RealEstateAgent.h"

using namespace std;

class Property
{
public:
	Property();
	Property(string, string, Client, RealEstateAgent*, Date);
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

