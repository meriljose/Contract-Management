#include "fullyearcontract.h"

FullYearContract::FullYearContract(const string& name, int contractPeriod, int contractId) : BaseContract(name, "Fullyear", contractPeriod, contractId) {}

void FullYearContract::displayDetails()
{
    cout << "Fullyear contract,";
    displayAttributes(contractAttributes);
}

void FullYearContract::updateDetails(int newperiod)
{
    contractAttributes.contractPeriod = newperiod;
}
