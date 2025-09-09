#include "Sports.h"
using namespace std;

Sports::Sports(){
    name="";
    fees=0.0; 
}
Sports::Sports(string nm, float f){
    name=nm;
    fees=f;
}
Sports::~Sports() {}

string Sports::getName() const { 
    return name;
}
float Sports::getFees() const { 
    return fees; 
}

void Sports::setName(string nm) {
     name = nm;
}
void Sports::setFees(float f) { 
    fees = f; 
}

void Sports::display() const {
    cout << "Sport: " << name << ", Fees: " << fees << endl;
}
