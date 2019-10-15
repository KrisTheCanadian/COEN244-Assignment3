#include "LandSale.h"

LandSale::LandSale() 
	:area_(-1), price_(-1)
{}

LandSale::LandSale(string, string, Client, RealEstateAgent, Date, double area, int price)
	:area_(area), price_(price)
{}
