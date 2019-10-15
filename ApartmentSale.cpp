#include "ApartmentSale.h"

ApartmentSale::ApartmentSale() 
	:year_of_build_(-1), no_of_rooms_(-1), condominium_fee_(-1), price_(-1)
{}
ApartmentSale::ApartmentSale(string , string, Client, RealEstateAgent, Date, int year, int no_of_room, int fee, int price)
	:year_of_build_(year), no_of_rooms_(no_of_room), condominium_fee_(fee), price_(price)
{}