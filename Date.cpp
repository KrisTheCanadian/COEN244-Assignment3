#include "Date.h"

Date::Date():month_(0), day_(0), year_(0){}

Date::Date(int m, int d, int y):month_(m), day_(d), year_(y){}

int Date::getmonth(){ return month_;}

void Date::setmonth(int m){month_ = m;}

int Date::getday(){return day_;}

void Date::setday(int d){day_ = d;}

int Date::getyear(){return year_;}

void Date::setyear(int y){year_ = y;}

void Date::print()
{
	std::cout << "Month: " << getmonth() << std::endl;
	std::cout << "Day: " << getday() << std::endl;
	std::cout << "Year: " << getyear() << std::endl;
}