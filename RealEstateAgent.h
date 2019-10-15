#pragma once
#include "Person.h"
class RealEstateAgent 
	:public Person
{
public:
	RealEstateAgent();
	RealEstateAgent(string, string, Date, int);
	Date getemployementdate();
	void setemployementdate(Date);
	int getemployeeid();
	void setemployeeid(int);
	~RealEstateAgent();
	virtual void print() override;
private:
	Date employment_date_;
	int employee_id_;
};

