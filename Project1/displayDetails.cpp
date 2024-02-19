#include "displaydetails.h"

void DisplayAttributes::displayAttributes(const ContractAttributes& attributes)
{
	std::cout << "Name: " << attributes.personName << ",Person ID: " << attributes.personId << ",Contract Period: " << attributes.contractPeriod << std::endl;
}