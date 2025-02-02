#include "Property.h"

Property::Property()
	:street_address_("0"), cityname_("0"), seller_(nullptr),buyer_(nullptr),agent_(nullptr),listingdate_()
{}
Property::Property(string addy, string city, Client* seller, RealEstateAgent* agent, Date listing)
	:street_address_(addy),cityname_(city), seller_(seller), buyer_(nullptr), agent_(agent), listingdate_(listing)
{}

void Property::print() 
{
	if (this != nullptr)
	{
		cout << "[Property] Location: " << this->getstreetaddy() + ", " << this->getcityname() << endl;
		this->getseller()->print();
		this->getagent()->print();
		this->getdate().print();
	}
}
Property::~Property() {}
string Property::getstreetaddy() { return street_address_;}
void Property::setstreetaddy(string s) { street_address_ = s; }
string Property::getcityname() { return cityname_; }
void Property::setcityname(string city) { cityname_ = city; }
Client* Property::getseller() { return seller_; }
void Property::setseller(Client* sell) { seller_ = sell; }
Client* Property::getbuyer() { return buyer_; }
void Property::setbuyer(Client* buy) { buyer_ = buy; }
RealEstateAgent* Property::getagent() { return agent_; }
void Property::setagent(RealEstateAgent* agent) { agent_ = agent; }
Date Property::getdate() { return listingdate_; }
void Property::setdate(Date d) { listingdate_ = d; }