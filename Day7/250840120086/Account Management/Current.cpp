#include<iostream>
#include"Current.h"
using namespace std;

double Current::minBal=1000;

Current::Current(){
    avgAnnubal=0.0;
    noOfTrans=0;
}

Current::Current(const char* fn,const char* ln,const char* con,const char em[20],double bal,double aBal,int nt):Account(fn,ln,con,em, bal){
    avgAnnubal=aBal;
    noOfTrans=nt;
}

Current::~Current(){
}


void Current::setAvgAnnualBal(double aBal){
    avgAnnubal=aBal;
}
void Current::setNoOfTransation(int nt){
    noOfTrans=nt;
}

//getters
double Current::getAvgAnnualBal(){
    return avgAnnubal;
}
int Current::getNoOfTransation(){
    return noOfTrans;
}



void Current::display()const{
    cout<<"\nAccount Details: \nType : Current Account"<<endl;
    Account::display();
    cout<<"Average Annual Balance : "<<avgAnnubal<<endl;
    cout<<"No. of Transaction : " <<noOfTrans<<endl;
    cout<<"Minimum Bal : "<<minBal<<endl;
}


