#include "displaymanager.h"

ReturnType DisplayManager::displayContractDetails(const std::vector<BaseContract*>& myVector)
{
    ReturnType status = ReturnType::ERROR_NOT_FOUND;
    for (int i = 0; i < myVector.size(); i++)
    {
        myVector[i]->displayDetails();
        status = ReturnType::SUCCESS;
    }

    if (myVector.empty())
    {
        cout << "No contracts added \n";
        status = ReturnType::EMPTY;
    }
    return status;
}

ReturnType DisplayManager::displayContractDetailsbyParameter(const std::vector<BaseContract*>& myVector, string name)
{
    ReturnType status = ReturnType::ERROR_NOT_FOUND;

    for (int i = 0; i < myVector.size(); i++)
    {
        if (name == myVector[i]->getName())
        {
            myVector[i]->displayDetails();
            status = ReturnType::SUCCESS;
        }
    }

    if (myVector.empty())
    {
        cout << "No contracts added \n";
        status = ReturnType::EMPTY;
    }
    return status;
}

ReturnType DisplayManager::displayContractDetailsbyParameter(const std::vector<BaseContract*>& myVector, int id)
{
    ReturnType status = ReturnType::ERROR_NOT_FOUND;

    for (int i = 0; i < myVector.size(); i++)
    {
        if (id == myVector[i]->getId())
        {
            myVector[i]->displayDetails();
            status = ReturnType::SUCCESS;
        }
    }

    if (myVector.empty())
    {
        cout << "No contracts added \n";
        status = ReturnType::EMPTY;
    }

    return status;
}

ReturnType DisplayManager::displayContractDetailsbyContractType(const std::vector<BaseContract*>& myVector, string name)
{
    ReturnType status = ReturnType::ERROR_NOT_FOUND;

    for (int i = 0; i < myVector.size(); i++)
    {
        if (name == myVector[i]->getContractType())
        {
            myVector[i]->displayDetails();
            status = ReturnType::SUCCESS;
        }
    }

    if (myVector.empty())
    {
        cout << "No contracts added \n";
        status = ReturnType::EMPTY;
    }

    return status;
}
