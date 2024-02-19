#include "contractmanager.h"

void ContractManager::addContracts(BaseContract* mycontract)
{
    contracts.push_back(mycontract);
}

ReturnType ContractManager::updateContractDetailsbyParameter(int id, int newperiod)
{
    ReturnType status = ReturnType::ERROR_NOT_FOUND;

    for (int i = 0; i < contracts.size(); i++)
    {
        if (id == contracts[i]->getId())
        {
            contracts[i]->updateDetails(newperiod);
            status = ReturnType::SUCCESS;
        }
    }

    if (contracts.empty())
    {
        cout << "No contracts added \n";
        status = ReturnType::EMPTY;
    }
    return status;
}

ReturnType ContractManager::updateContractDetailsbyParameter(string name, int newperiod)
{
    ReturnType status = ReturnType::ERROR_NOT_FOUND;

    for (int i = 0; i < contracts.size(); i++)
    {
        if (name == contracts[i]->getName())
        {
            contracts[i]->updateDetails(newperiod);
            status = ReturnType::SUCCESS;
        }
    }

    if (contracts.empty())
    {
        cout << "No contracts added \n";
        status = ReturnType::EMPTY;
    }
    return status;
}

ReturnType ContractManager::deleteContractDetailsbyParameter(int id)
{
    ReturnType status = ReturnType::ERROR_NOT_FOUND;

    for (int i = 0; i < contracts.size(); i++)
    {
        if (id == contracts[i]->getId())
        {
            delete contracts[i];
            contracts.erase(contracts.begin() + i);
            cout << " delete the contact successfully\n";
            status = ReturnType::SUCCESS;
        }
    }

    if (contracts.empty())
    {
        cout << "No contracts added \n";
        status = ReturnType::EMPTY;
    }

    return status;
}

ReturnType ContractManager::deleteContractDetailsbyParameter(string name)
{
    ReturnType status = ReturnType::ERROR_NOT_FOUND;

    for (int i = 0; i < contracts.size(); i++)
    {
        if (name == contracts[i]->getName())
        {
            delete contracts[i];
            contracts.erase(contracts.begin() + i);
            cout << " delete the contact successfully\n";
            status = ReturnType::SUCCESS;
        }
    }

    if (contracts.empty())
    {
        cout << "No contracts added \n";
        status = ReturnType::EMPTY;
    }
    return status;
}

ContractManager::~ContractManager()
{
    for (const auto& contract : contracts)
    {
        delete contract;
    }
}
