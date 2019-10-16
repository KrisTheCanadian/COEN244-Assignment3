#include "HouseSale.h"

int HouseSale::getbuildyear() { return year_of_build_; }
void HouseSale::setbuildyear(int build) { year_of_build_ = build; }
int HouseSale::getroomno() { return no_of_rooms_; }
void HouseSale::setroomno(int noroom) { no_of_rooms_ = noroom; }
int HouseSale::getprice() { return price_; }
void HouseSale::setprice(int price) { price_ = price; }

HouseSale::HouseSale(string address, string cityName, Client seller, RealEstateAgent agent, Date listingDate, int yearOfBuild, int noOfRooms, int price)
	:year_of_build_(yearOfBuild), no_of_rooms_(noOfRooms), price_(price)
{
	this->setstreetaddy(address);
	this->setcityname(cityName);
	this->setseller(&seller);
	this->setagent(&agent);
	this->setdate(listingDate);
}

HouseSale::HouseSale()
	:year_of_build_(-1), no_of_rooms_(-1), price_(0)
{
	this->setstreetaddy("Does not Exist");
	this->setcityname("Does not Exist");
	this->setseller(nullptr);
	this->setagent(nullptr);
}

void HouseSale::print() 
{
	cout << "[House Sale] Location: " + this->getstreetaddy() + ", " + this->getcityname() << endl;
	this->getseller()->print();
	this->getagent()->print();
	this->getdate().print();
	cout << "[House Sale] Built in: " + this->getbuildyear() << endl;
	cout << "[House Sale] Number of Rooms: " << this->no_of_rooms_ << endl;
	cout << "[House Sale] Price: " << this->price_ << endl;
}

HouseSale::~HouseSale() {}