#pragma once
#include "Person.h"

class Client :
	public Person
{
public:
	Client();
	Client(string, string, string);
	~Client();
	virtual print();
private:
	string socialinsurancenumber_;
};

