#include "ApartmentSale.h"

ApartmentSale::ApartmentSale() 
	:year_of_build_(-1), no_of_rooms_(-1), condominium_fee_(-1), price_(-1)
{}

ApartmentSale::ApartmentSale(string address, string cityName, Client seller, RealEstateAgent agent, Date listingDate, int year, int no_of_room, int fee, int price)
	: Property(address, cityName, &seller, &agent, listingDate) ,year_of_build_(year), no_of_rooms_(no_of_room), condominium_fee_(fee), price_(price)
{}

ApartmentSale::~ApartmentSale() {}

void ApartmentSale::print() 
{
	cout << "[Apartment] Location: " + this->getstreetaddy() + ", " + this->getcityname() << endl;
	this->getseller()->print();
	this->getagent()->print();
	this->getdate().print();
	cout << "[Apartment] Built in: " + this->year_of_build_ << endl;
	cout << "[Apartment] Number of Rooms: " + this->no_of_rooms_<< endl;
	cout << "[Apartment] Fee: " + this->condominium_fee_ << endl;
	cout << "[Apartment] Price: " + this->price_ << endl;
}
int ApartmentSale::getbuildyear() { return year_of_build_; }
void ApartmentSale::setbuildyear(int y) { year_of_build_ = y; }
int ApartmentSale::getrooms() { return no_of_rooms_; }
void ApartmentSale::setrooms(int room) { no_of_rooms_ = room; }
int ApartmentSale::getcondofee() { return condominium_fee_; }
void ApartmentSale::setcondofee(int condo) { condominium_fee_ = condo; }
int ApartmentSale::getprice() { return price_; }
void ApartmentSale::setprice(int price) { price_ = price; }