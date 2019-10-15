#pragma once
#include "Person.h"
class RealEstateAgent 
	:public Person
{
public:
	RealEstateAgent();
	RealEstateAgent(string, string, Date, int);
	~RealEstateAgent();
	virtual void print() override;
private:
	Date employmen_date_;
	int employee_id_;
};

