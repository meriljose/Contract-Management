#include "menu.h"
#include "common.h"

void Menu::initialDisplay()
{
    cout << "Welcome \n";
    cout << "Input 1 for adding the contract \n";
    cout << "Input 2 for updating the contract \n";
    cout << "Input 3 for deleting the contract \n";
    cout << "Input 4 for displaying the contract \n";
    cout << "Input 5 for exiting \n";
}

void Menu::addContracts()
{
    int contractPeriod,contractId;
    char contractchoice;
    string contractName;

    cout << "H for Half yearly contract or F for Full yearly contract \n";
    cin >> contractchoice;
    cout << "Enter the name \n";
    cin >> contractName;
    cout << "Enter the contract period in months \n";
    cin >> contractPeriod;
    cout << "Enter the contract id \n";
    cin >> contractId;

    if (contractchoice == 'h' || contractchoice == 'H')
    {
        HalfYearContract* halfyear = new HalfYearContract(contractName, contractPeriod, contractId);
        contractmanager.addContracts(halfyear);
    }
    else if (contractchoice == 'f' || contractchoice == 'F')
    {
        FullYearContract* fullyear = new FullYearContract(contractName, contractPeriod, contractId);
        contractmanager.addContracts(fullyear);
    }
    else
    {
        cout << "Enter valid input \n";
    }
}

void Menu::updateContracts()
{
    int updateChoice,updatedPeriod,displayId;
    string displayName;
    ReturnType status;

    cout << "Input 1 for update contracts by Id \n";
    cout << "Input 2 for update contracts by name \n";
    cin >> updateChoice;
    switch (updateChoice)
    {
    case 1:
    {
        cout << "Enter the id which you want to update \n";
        cin >> displayId;
        cout << "Enter the new period \n";
        cin >> updatedPeriod;
        status = contractmanager.updateContractDetailsbyParameter(displayId, updatedPeriod);
        if (ReturnType::ERROR_NOT_FOUND == status)
        {
            cout << "Enter valid contract id \n";
        }
        break;
    }
    case 2:
    {
        cout << "Enter the name which you want to update \n";
        cin >> displayName;
        cout << "Enter the new period \n";
        cin >> updatedPeriod;
        status = contractmanager.updateContractDetailsbyParameter(displayName, updatedPeriod);
        if (ReturnType::ERROR_NOT_FOUND == status)
        {
            cout << "Enter valid name \n";
        }
        break;
    }
    default:
        cout << "Enter valid choice \n";
    }
}

void Menu::deleteContracts()
{
    int displayId, deleteChoice;
    string displayName;
    ReturnType status;

    cout << "Input 1 for delete contracts by Id \n";
    cout << "Input 2 for delete contracts by name \n";
    cin >> deleteChoice;
    switch (deleteChoice)
    {
    case 1:
    {
        cout << "Enter the id which you want to delete \n";
        cin >> displayId;
        status = contractmanager.deleteContractDetailsbyParameter(displayId);
        if (ReturnType::ERROR_NOT_FOUND == status)
        {
            cout << "Enter valid contract id \n";
        }
        break;
    }
    case 2:
    {
        cout << "Enter the name which you want to delete \n";
        cin >> displayName;
        status = contractmanager.deleteContractDetailsbyParameter(displayName);
        if (ReturnType::ERROR_NOT_FOUND == status)
        {
            cout << "Enter valid name \n";
        }
        break;
    }
    default:
        cout << "Enter valid choice \n";
    }
}

void Menu::displayContracts()
{
    int displayChoice, displayId;
    string displayName, contractType;
    ReturnType status;

    cout << "Input 1 for display all contracts \n";
    cout << "Input 2 for display contracts by Id \n";
    cout << "Input 3 for display contracts by name \n";
    cout << "Input 4 for display contracts by contract type \n";
    cin >> displayChoice;
    switch (displayChoice)
    {
    case 1:
    {
        displaymanager.displayContractDetails(contractmanager.contracts);
        break;

    }
    case 2:
    {
        cout << "Enter the id which you want to display \n";
        cin >> displayId;
        status = displaymanager.displayContractDetailsbyParameter(contractmanager.contracts, displayId);
        if (ReturnType::ERROR_NOT_FOUND == status)
        {
            cout << "Enter valid contract id \n";
        }
        break;
    }
    case 3:
    {
        cout << "Enter the name which you want to display \n";
        cin >> displayName;
        status = displaymanager.displayContractDetailsbyParameter(contractmanager.contracts, displayName);
        if (ReturnType::ERROR_NOT_FOUND == status)
        {
            cout << "Enter valid name \n";
        }
        break;
    }
    case 4:
    {
        cout << "Enter the contract type you want to display \n";
        cin >> contractType;
        status = displaymanager.displayContractDetailsbyContractType(contractmanager.contracts, contractType);
        if (ReturnType::ERROR_NOT_FOUND == status)
        {
            cout << "Enter valid contract type \n";
        }
        break;
    }
    default:
        cout << "Enter valid choice \n";
    }
}

void Menu::userMenu()
{
    int choice;
    do
    {
        initialDisplay();
        cin >> choice;
        switch (choice)
        {
            case 1:
            {
                addContracts();
                break;
            }
            case 2:
            {
                updateContracts();
                break;            
            }
            case 3:
            {
                deleteContracts();
                break;            
            }
            case 4:
            {
                displayContracts();
                break;
            }
            case 5:
            {
                cout << "Exiting............. \n";
                break;
            }
            default:
                cout << "Invalid choice, try again \n";

        }
    } while (choice != 5);
}
