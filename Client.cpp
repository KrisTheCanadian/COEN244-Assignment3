#include "Client.h"

Client::Client() 
	:socialinsurancenumber_("0")
{}
Client::Client(string name, string addy, string social)
	:socialinsurancenumber_(social)
{
	this->setname(name);
	this->setaddy(addy);
}

string Client::getsocial() { return socialinsurancenumber_; }
void Client::setsocial(string social) { socialinsurancenumber_ = social; }
void Client::print() {}