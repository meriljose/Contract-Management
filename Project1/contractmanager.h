#pragma once
#include "basecontract.h"
#include "common.h"

class ContractManager
{
public:
    vector<BaseContract*> contracts;
    void addContracts(BaseContract* mycontract);
    ReturnType updateContractDetailsbyParameter(int id, int newperiod);
    ReturnType updateContractDetailsbyParameter(string name, int newperiod);
    ReturnType deleteContractDetailsbyParameter(int id);
    ReturnType deleteContractDetailsbyParameter(string name);
    ~ContractManager();
};
