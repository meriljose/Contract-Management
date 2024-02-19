#pragma once

#include "basecontract.h"

class FullYearContract : public BaseContract
{
public:
    FullYearContract(const string& name, int contractPeriod, int contractId);

    void displayDetails() override;

    void updateDetails(int newperiod) override;
};
