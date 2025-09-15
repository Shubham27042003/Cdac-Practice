#include<iostream>
#include"AccountService.h"
using namespace std;

int main(){
    int ch;
    do{
        cout<<"\n--- Account Management ---"<<endl;
        cout << "1. Add new account"<<endl;
        cout << "3. Display All Accounts"<<endl;
        cout << "4. Search by account number"<<endl;
        cout << "5. Search by Name"<<endl;
        cout << "6. Sort Accounts by balance"<<endl;
        cout << "7. Display All Saving Account"<<endl;
        cout << "8. Display All Current Account"<<endl;
        cout << "9. Exit"<<endl;

        cout<<"\n Enter your choice: "<<endl;
        cin>>ch;

        switch (ch)
        {
        case 1:
        case 2:
            AccountService::addAccount(ch);
            break;
        case 3:
            AccountService::displayAllAccounts();
            break;
        case 4: {
            char id[50];
            cout << "Enter ID to search: ";
            cin >> id;
            Account* ac = AccountService::searchByAccNumber(id);
            if (ac)
                ac->display();
            else
                cout << "Account not found.\n";
            break;
        }
        case 5: {
            char fName[50],lName[50];
            cout << "Enter First name and Last Name to search: ";
            cin >> fName >> lName;
            AccountService::searchByName(fName,lName);
            break;
        }
        case 6:
            AccountService::sortByBalance();
            cout<<"\n Accounts after sorted"<<endl;
            AccountService::displayAllAccounts();
            break;
        case 7:
            AccountService::displayAllSaving();
            break;
        case 8:
            AccountService::displayAllCurrent();
            break;
        case 9:
            cout<<"\n Thank You!!!"<<endl;
            break;
        
        default:
            cout<<"Enter valid choice!!!"<<endl;
            break;
        }


    }while(ch!=9);
}