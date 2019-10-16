#include "LandSale.h"

LandSale::LandSale() 
	:area_(-1), price_(-1)
{
	this->setstreetaddy("Does not Exist");
	this->setcityname("Does not Exist");
	this->setseller(nullptr);
	this->setagent(nullptr);
}

LandSale::LandSale(string address, string cityName, Client seller, RealEstateAgent agent, Date listingDate, double area, int price)
	:area_(area), price_(price)
{
	this->setstreetaddy(address);
	this->setcityname(cityName);
	this->setseller(&seller);
	this->setagent(&agent);
	this->setdate(listingDate);
}

void LandSale::print() 
{
	cout << "[Land Sale] Location: " + this->getstreetaddy() + ", " + this->getcityname() << endl;
	this->getseller()->print();
	this->getagent()->print();
	this->getdate().print();
	cout << "[Land Sale] Area: " << this->area_ << endl;
	cout << "[Land Sale] Price: " + this->price_ << endl;
}

double LandSale::getarea() { return area_; }
void LandSale::setarea(double area) { area_ = area; }
int LandSale::getprice() { return price_; }
void LandSale::setprice(int price) { price_ = price; }
