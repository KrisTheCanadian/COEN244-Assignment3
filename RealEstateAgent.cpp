#include "RealEstateAgent.h"

RealEstateAgent::RealEstateAgent(string name, string address, Date employment_date, int employeeID) 
	:employee_id_(employeeID)
{
	this->setname(name);
	this->setaddy(address);
	this->setemployementdate(employment_date);
}

Date RealEstateAgent::getemployementdate() { return employment_date_; }
void RealEstateAgent::setemployementdate(Date date) { employment_date_ = date; }
int RealEstateAgent::getemployeeid() { return employee_id_; }
void RealEstateAgent::setemployeeid(int id) { employee_id_ = id; }