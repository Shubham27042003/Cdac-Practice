#include<iostream>
#include <algorithm>
#include<cstring>
#include"AccountService.h"
#include"Saving.h"
#include"Current.h"
using namespace std;

Account* AccountService::accounts[MAX_ACC];
int AccountService::count=0;

//Add Account
void AccountService::addAccount(int ch) {
    if (count >= MAX_ACC) {
        std::cout << "Cannot add more employees.\n";
        return;
    }

    char fName[50];
    char lName[50];
    char contact[20];
    char email[50];
    double bal;

    cout << "Enter fName, lName, Contact, Email,Balance: "<<endl;
    cin >> fName >> lName >> contact >> email >> bal;

    if (ch == 1) {
        int chBookNumber;
        cout << "Enter CheckBook Number : ";
        cin >> chBookNumber;
        accounts[count++] = new Saving(fName,lName,contact,email,bal,chBookNumber);
    } else if (ch == 2) {
        
        double avgAnnubal;
        int noOfTrans;
        cout << "Enter Average Annual Balance , Number of Transation : ";
        cin >> avgAnnubal >> noOfTrans;
        accounts[count++] = new Current(fName,lName,contact,email,bal,avgAnnubal,noOfTrans);
    } else {
        std::cout << "Invalid Account type.\n";
    }

}

//display all
void AccountService::displayAllAccounts(){
    for (int i = 0; i < count; ++i) {
    accounts[i]->display();
    cout << "-----------------------\n";
    }
}

//search by Account number
Account* AccountService::searchByAccNumber(const char* accId) {
    for (int i = 0; i < count; ++i) {
        if (strcmp(accounts[i]->getId(),accId)==0) {
            return accounts[i];
        }
       
    }
    return nullptr;
}

//Search by Name
void AccountService::searchByName(const char* fN,const char* lN) {
    bool found = false;
    for (int i = 0; i < count; ++i) {
        if ((strcmp(accounts[i]->getfName(), fN) == 0) && (strcmp(accounts[i]->getlName(), lN) == 0)) {
            accounts[i]->display();
            cout << "-----------------------\n";
            found = true;
        }
    }
    if (!found) std::cout << "No employee found with name: " << fN <<" "<<lN<<endl;
}

//Sort by balance
void AccountService::sortByBalance() {
    sort(accounts, accounts + count, [](Account* a, Account* b) {
        return a->getBal() > b->getBal(); // Descending
    });
}

//Display all saving accounts
void AccountService::displayAllSaving() {
    for (int i = 0; i < count; ++i) {
        if (dynamic_cast<Saving*>(accounts[i])) {
            accounts[i]->display();
            cout << "-----------------------\n";
        }
    }
}

//Display all Current accounts
void AccountService::displayAllCurrent() {
    for (int i = 0; i < count; ++i) {
        if (dynamic_cast<Current*>(accounts[i])) {
            accounts[i]->display();
            cout << "-----------------------\n";
        }
    }
}

void AccountService::cleanup() {
    for (int i = 0; i < count; ++i) {
        delete accounts[i];
    }
    count = 0;
}
