#include "halfyearcontract.h"

HalfYearContract::HalfYearContract(const string& name, int contractPeriod, int contractId) : BaseContract(name, "Halfyear", contractPeriod, contractId) {}

void HalfYearContract::displayDetails() 
{
    cout << "Halfyear contract,";
    displayAttributes(contractAttributes);
}

void HalfYearContract::updateDetails(int newperiod)
{
    contractAttributes.contractPeriod = newperiod;
}
