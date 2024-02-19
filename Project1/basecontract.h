#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "contractattributes.h"
#include "displaydetails.h"

using namespace std;

class BaseContract : public DisplayAttributes
{
protected:
    ContractAttributes contractAttributes;
public:
    BaseContract(const string& name, const string& type, int period, int id);

    virtual void displayDetails() = 0;

    virtual void updateDetails(int newperiod) = 0;

    string getName() const;

    int getId() const;

    string getContractType() const;

    ContractAttributes& getAllAttributes();

    virtual ~BaseContract() = default;
};
