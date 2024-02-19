#include "basecontract.h"


BaseContract::BaseContract(const string& name, const string& type, int period, int id)  
{
    contractAttributes.personName = name;
    contractAttributes.personId = id;
    contractAttributes.contractType = type;
    contractAttributes.contractPeriod = period;
}

string BaseContract::getName() const
{
    return contractAttributes.personName;
}

int BaseContract::getId() const
{
    return contractAttributes.personId;
}

string BaseContract::getContractType() const
{
    return contractAttributes.contractType;
}

ContractAttributes& BaseContract::getAllAttributes()
{
    return contractAttributes;
}
