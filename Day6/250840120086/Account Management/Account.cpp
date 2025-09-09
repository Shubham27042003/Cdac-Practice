#include<iostream>
#include<cstring>
#include"Account.h"
using namespace std;

int Account::count=0;

Account::Account(){
        fName=nullptr;
        lName=nullptr;
        contact=nullptr;
        id[0]='\0';
        email[0]='\0';
        bal=0;
    }

Account::Account(const char* fn,const char* ln,const char* con,const char em[50],double bal ){
    fName=new char[strlen(fn)+1];
    strcpy(this->fName,fn);

    lName=new char[strlen(ln)+1];
    strcpy(this->lName,ln);

    contact=new char[strlen(con)+1];
    strcpy(this->contact,con);

    strcpy(this->email,em);
    this->bal=bal;
    snprintf(id, sizeof(id), "%.3s%.3s%d", fn, ln, ++count);

}
Account::~Account(){
    if(fName)
        delete[] fName;
    if (lName)
        delete[] lName;
    
}

//setters
void Account::setfName(const char* name) {
    if (fName) delete[] fName;
    fName = new char[strlen(name) + 1];
    strcpy(fName, name);
}

void Account::setlName(const char* name) {
    if (lName) delete[] lName;
    lName = new char[strlen(name) + 1];
    strcpy(lName, name);
}

void Account::setContact(const char* cont) { 
    if (contact) delete[] contact;
    contact = new char[strlen(cont) + 1];
    strcpy(contact, cont);
}

void Account::setEmail(const char* mail) { strcpy(email, mail); }
void Account::setBalance(double bal) { this->bal = bal; }

// getters
const char* Account::getfName() const { return fName; }
const char* Account::getlName() const { return lName; }
const char* Account::getContact() const { return contact; }
const char* Account::getMail() const { return email; }
const char* Account::getId() const{return id;}
double Account::getBal() const { return bal; }

// display
void Account::display() const {
    cout << "Account ID : " << id <<endl;
    cout<< "Name       : " << (fName ? fName : "") << " " << (lName ? lName : "") <<endl;
    cout<< "Contact    : " << contact <<endl;
    cout<< "Email      : " << email <<endl;
    cout<< "Balance    : " << bal << endl;
}
