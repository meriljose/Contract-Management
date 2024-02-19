#pragma once

#include "contractmanager.h"
#include "fullyearcontract.h"
#include "halfyearcontract.h"
#include "displaymanager.h"

class Menu
{
public:
    ContractManager contractmanager;
    DisplayManager displaymanager;

    void initialDisplay();

    void userMenu();

    void addContracts();

    void updateContracts();

    void deleteContracts();

    void displayContracts();
};
