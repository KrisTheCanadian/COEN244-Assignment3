#include "LandSale.h"

LandSale::LandSale() 
	:area_(-1), price_(-1)
{}

LandSale::LandSale(string, string, Client, RealEstateAgent, Date, double area, int price)
	:area_(area), price_(price)
{}

double LandSale::getarea() { return area_; }
void LandSale::setarea(double area) { area_ = area; }
int LandSale::getprice() { return price_; }
void LandSale::setprice(int price) { price_ = price; }
