#pragma once
#include <iostream>
#include "Date.h"

using namespace std;

class Person
{
public:
	Person();
	Person(string, string, Date);
	~Person();
	virtual void print();
private:
	string name_;
	string address_;
};

