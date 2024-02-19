#pragma once

#include "basecontract.h"

class HalfYearContract : public BaseContract
{
public:
    HalfYearContract(const string& name, int contractPeriod, int contractId);

    void displayDetails() override;

    void updateDetails(int newperiod) override;
};