#include "ApartmentSale.h"
#include "Client.h"
#include "Date.h"
#include "HouseSale.h"
#include "LandSale.h"
#include "Person.h"
#include "Property.h"
#include "RealEstateAgent.h"
#include "RealEstateManager.h"
#include <iostream>

void test() {

	//dynamically allocating Date objects
	Date* d1, * d2, * d3;
	d1 = new Date(10, 16, 2019);
	d2 = new Date(11, 11, 2011);
	d3 = new Date(10, 10, 10);
	
	//dynamically allocating Person objects
	Person* p1, * p2, * p3;
	p1 = new Person((std::string)"Elon Musk", (std::string)"address", *d3); 
	p2 = new Person((std::string)"Bob", (std::string)"add2", *d2);
	p3 = new Person((std::string)"Anne", (std::string)"add2", *d2);

	//dynamically allocating Client objects
	Client* c1, * c2, * c3;
	c1 = new Client((std::string)"Garry", (std::string)"address", (std::string)"123");
	c2 = new Client((std::string)"Ryan", (std::string)"add2", (std::string)"456");
	c3 = new Client((std::string)"Robert", (std::string)"add2", (std::string)"789");

	//-------------------------------------------------------------------------------------------------//

	//memory clearing// - completely useless because the program terminates soon but here it is.
	//dates
	delete d1;
	delete d2;
	delete d3;
	cout << "dynamically allocated date 1,2 and 3 deleted in Main.cpp" << endl;
	//

	//persons
	delete p1;
	delete p2;
	delete p3;
	cout << "dynamically allocated person 1,2 and 3 deleted in Main.cpp" << endl;
	//

	//clients
	delete c1;
	delete c2;
	delete c3;
	cout << "dynamically allocated client 1,2 and 3 deleted in Main.cpp" << endl;
	//


	//end of memory clearing//
}



int main() 
{

	test();

	return 0;
}