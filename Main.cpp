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
	Date* d1, * d2, * d3, * d4, * d5, *d6, *d7;
	d1 = new Date(10, 16, 2019);
	d2 = new Date(11, 11, 2011);
	d3 = new Date(10, 10, 2010);
	d4 = new Date(8, 5, 2000);
	d5 = new Date(6, 7, 2008);
	d6 = new Date(9, 2, 2014);
	d7 = new Date(2, 10, 2019);

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


	//dynamically allocating RealEstateManager object
	RealEstateManager* m1 = new RealEstateManager();

	//dynamically allocating RealEstateAgent objects
	RealEstateAgent* r1, * r2, * r3;
	r1 = new RealEstateAgent((std::string)"Donald", (std::string)"Trump", *d4, 400291);
	r2 = new RealEstateAgent((std::string)"Justin", (std::string)"Trudeau", *d5, 400592);
	r3 = new RealEstateAgent((std::string)"Xi", (std::string)"Jinping", *d7, 400749);

	//dynamically allocating HouseSale objects
	HouseSale* h1, * h2;
	h1 = new HouseSale((std::string)"Carmen Court", (std::string)"Detroit", *c1, *r1, *d1, 1980, 4, 40392);
	h2 = new HouseSale((std::string)"Van Horne", (std::string)"Montreal", *c1, *r1, *d5, 1950, 2, 42392);
	
	//dynamically allocating ApartmentSale objects
	ApartmentSale* a1, * a2;
	a1 = new ApartmentSale((std::string)"Cotes des Neiges", (std::string)"Montreal", *c2, *r2, *d6, 1945, 2, 200, 403020);
	a2 = new ApartmentSale((std::string)"Davaar", (std::string)"Montreal", *c2, *r2, *d6, 1990, 5, 500, 423020);

	//dynamically allocating LandSale objects
	LandSale* l1, * l2;
	l1 = new LandSale((std::string)"Rue St Marie", (std::string)"Montreal", *c3, *r3, *d6, 500, 423020);
	l2 = new LandSale((std::string)"Sherbrooke", (std::string)"Montreal", *c3, *r3, *d7, 1000, 40023020);
	
	//-------------------------------------------------------------------------------------------------//
	//Testing
	//Adding all of our objects into the manager
	m1->insertAgent(r1);
	m1->insertAgent(r2);
	m1->insertProperty(h1);
	m1->insertProperty(h2);
	m1->insertProperty(a1);
	m1->insertProperty(a2);
	m1->insertProperty(l1);
	m1->insertProperty(l2);
	m1->findPropertiesAgent(r1);
	m1->findHouseCity("Montreal");
	m1->propertysold(a1, c3);



	//memory clearing// - completely useless because the program terminates soon but here it is.
	//dates
	delete d1;
	delete d2;
	delete d3;
	delete d4;
	delete d5;
	delete d6;
	delete d7;
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

	//RealEstateAgent 
	delete r1;
	delete r2;
	delete r3;
	cout << "dynamically allocated Real Estate agent 1 and 2 deleted in Main.cpp" << endl;
	//

	//HouseSale
	delete h1;
	delete h2;
	cout << "dynamically allocated House sale 1 and 2 deleted in Main.cpp" << endl;
	//

	//ApartmentSale
	delete a1;
	delete a2;
	cout << "dynamically allocated Apartment sale 1 and 2 deleted in Main.cpp" << endl;
	//

	//LandSale
	delete l1;
	delete l2;
	cout << "dynamically allocated Land sale 1 and 2 deleted in Main.cpp" << endl;
	//

	//RealEstateManager
	delete m1;
	cout << "dynamically allocated Real Estate Manager 1 deleted in Main.cpp" << endl;
	//

	//end of memory clearing//
}



int main() 
{

	test();
	system("pause");
	return 0;
}