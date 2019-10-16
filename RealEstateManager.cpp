#include "RealEstateManager.h"

RealEstateManager::RealEstateManager()
{
	for (int i = 0; i < max_number_of_agents_; i++)
	{
		agentRecordsArray_[i] = nullptr;
	}
	for (int i = 0; i < listingsize_; i++)
	{
		propertyListingArray_[i] = nullptr;
	}
	for (int i = 0; i < archivesize_; i++)
	{
		archiveRecordsArray[i] = nullptr;
	}
}

bool RealEstateManager::insertAgent(RealEstateAgent* agent)
{
	for (int i = 0; i < max_number_of_agents_; i++)
	{
		if (agentRecordsArray_[i] == nullptr)
		{
			agentRecordsArray_[i] = agent;
			return true;
		}
		
	}
	return false;
}

bool RealEstateManager::insertProperty(Property* prop)
{
	for (int i = 0; i < listingsize_; i++)
	{
		if (propertyListingArray_[i] == 0)
		{
			propertyListingArray_[i] = prop;
			return true;
		}
		
	}
	return false;
}

bool RealEstateManager::propertysold(Property* prop, Client* buyer)
{
	prop->setbuyer(buyer);
	for (int i = 0; i < listingsize_; i++)
	{
		if (propertyListingArray_[i] == prop)
		{
			propertyListingArray_[i] = nullptr;
			break;
		}
		
	}
	for (int i = 0; i < archivesize_; i++)
	{
		if (archiveRecordsArray[i] == nullptr)
		{
			archiveRecordsArray[i] = prop;
			return true;
		}
		
	}
	return false;
}

void RealEstateManager::findHouseCity(string cityname)
{
	for (int i = 0; i < listingsize_; i++)
	{
		if (propertyListingArray_[i]->getcityname() == cityname)
		{
			propertyListingArray_[i]->print();
		}
	}
}

void RealEstateManager::findPropertiesAgent(RealEstateAgent* agent)
{
	for (int i = 0; i < listingsize_; i++)
	{
		if (propertyListingArray_[i]->getagent() == agent)
		{
			propertyListingArray_[i]->print();
		}
	}
}

