#include "RealEstateAgent.h"

RealEstateAgent::RealEstateAgent()
	:employee_id_(-1)
{
	this->setname("Does not Exist");
	this->setaddy("Does not Exist");
}

RealEstateAgent::RealEstateAgent(string name, string address, Date employment_date, int employeeID) 
	:employee_id_(employeeID)
{
	this->setname(name);
	this->setaddy(address);
	this->setemployementdate(employment_date);
}

void RealEstateAgent::print() 
{
	cout << "[Real Estate Agent] Name: " << this->getname() << endl;
	cout << "[Real Estate Agent] Address: " << this->getaddy() << endl;
	this->getemployementdate().print();
	cout << "[Real Estate Agent] Employee ID: " << this->employee_id_ << endl;
}

RealEstateAgent::~RealEstateAgent() {}

Date RealEstateAgent::getemployementdate() { return employment_date_; }
void RealEstateAgent::setemployementdate(Date date) { employment_date_ = date; }
int RealEstateAgent::getemployeeid() { return employee_id_; }
void RealEstateAgent::setemployeeid(int id) { employee_id_ = id; }