#include "Person.h"

Person::Person() 
	: name_("0"), address_("0")
{}

Person::Person(string name, string addy, Date birth) 
	:name_(name), address_(addy), birth_(birth)	//assumed the date was for the birthday.
{
	
}

string Person::getname(){return name_;}
void Person::setname(string name) { name_ = name; }
string Person::getaddy() { return address_; }
void Person::setaddy(string addy) { address_ = addy; }
Date Person::getbirth() { return birth_; }
void Person::setbirth(Date birth) { birth_ = birth; }
void Person::print() 
{
	cout << "[Person] Name: " + this->name_  << endl;
	cout << "[Person] Address: " + this->address_ << endl;
	this->birth_.print();
}
