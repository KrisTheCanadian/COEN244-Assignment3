#pragma once
#include <iostream>
#include "Date.h"

using namespace std;

class Person
{
public:
	Person();
	Person(string, string, Date);
	string getname();
	void setname(string);
	string getaddy();
	void setaddy(string);
	Date getbirth();
	void setbirth(Date birth);
	~Person();
	virtual void print();
private:
	string name_;
	string address_;
	Date birth_;
};

