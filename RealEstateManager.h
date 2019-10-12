#pragma once
class RealEstateManager
{
public:
	RealEstateManager();
	bool insertAgent(RealEstateAgent*);	//Adds a new agent to the agentRecordsArray
	bool insertProperty(Property*); //Adds a properrty to the first available lovatin in the properrtyListingArray
	bool propertysold(Property, Client*); //When a property is sold, the buyer will be stroed in the Property object and the object itself will be transferred from 
										  //propertyListingArray to the archiveRecordsArray and null value will be inserted at its location at the propertyListingArray
	void findHouseCity(string); //Determines all the houses for sale in a given city and prints them. String parameter of the functio  corresponds to a city name. 
								//You would need to use dynamic_cast to determine the claass of the objects stored in the propertyListingArray
	void findPropertiesAgent(RealEstateAgent*); //Determines all the listings of an agent and prints them out
private:
	static const int max_number_of_agents_ = 30;
	static const int listingsize_ = 1000;
	static const int archivesize_ = 2000;
	//The  following are array of pointers, all the arrays should be initialized to null values
	RealEstateAgent* agentRecordsArray_[max_number_of_agents_];
	Property* propertyListingArray_[listingsize_];
	Property* archiveRecordsArray[archivesize_];
};

