#include<iostream>
#include"Saving.h"
using namespace std;

double Saving::minBal=20000;

Saving::Saving(){
    chBookNumber=0.0;
}

Saving::Saving(const char* fn,const char* ln,const char* con,const char em[20],double bal,int cbn):Account(fn,ln,con,em, bal){
    chBookNumber=cbn;
}

Saving::~Saving(){
}

void Saving::setChBookNumber(int cbn){
        chBookNumber=cbn;
}

double Saving::getChBookNumber(){
    return chBookNumber;
}

void Saving::display()const{
    cout<<"\nAccount Details: \nType : Saving Account"<<endl;
    Account::display();
    cout<<"ChechBookNumber : "<<chBookNumber<<endl;
    cout<<"Minimum Bal : "<<minBal<<endl;
}


