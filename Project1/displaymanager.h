#pragma once

#include "common.h"
#include "basecontract.h"

class DisplayManager
{
public:
    ReturnType displayContractDetails(const std::vector<BaseContract*>& myVector);
    ReturnType displayContractDetailsbyParameter(const std::vector<BaseContract*>& myVector, string name);
    ReturnType displayContractDetailsbyParameter(const std::vector<BaseContract*>& myVector, int id);
    ReturnType displayContractDetailsbyContractType(const std::vector<BaseContract*>& myVector, string name);
};