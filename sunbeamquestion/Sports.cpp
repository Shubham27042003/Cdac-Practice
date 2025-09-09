#include "Sports.h"

Sports::Sports() {}
Sports::Sports(string s, double f){
    sportsName=s;
    fees=f;
}

string Sports::getSportsName() const
 { 
    return sportsName;
 }
double Sports::getFees() const
 { 
    return fees; 
}

void Sports::display() const {
    cout << "Sport: " << sportsName << ", Fees: " << fees << endl;
}
