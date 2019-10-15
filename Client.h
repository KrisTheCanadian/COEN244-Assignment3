#pragma once
#include "Person.h"

class Client 
	:public Person
{
public:
	Client();
	Client(string, string, string);
	string getsocial();
	void setsocial(string);
	~Client();
	void virtual print() override;
private:
	string socialinsurancenumber_;
};

