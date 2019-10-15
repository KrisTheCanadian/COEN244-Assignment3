#include "Person.h"

Person::Person() : name_("0"), address_("0") {}
Person::Person(string name, string addy, Date birth) :name_(name), address_(addy)
{
	//Where the fuck does date go
}

string Person::getname(){return name_;}
void Person::setname(string name) { name_ = name; }
string Person::getaddy() { return address_; }
void Person::setaddy(string addy) { address_ = addy; }
void Person::print() {}
