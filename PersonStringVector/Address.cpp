#include<iostream>
#include "Address.h"

using namespace std;

Address::Address(){
     street="";
     city="";
     state="";
     pin=0;
}

Address::Address(const string str, const string ct, const string st, int pn){
    street=str;
    city=ct;
    state=st;
    pin=pn;
} 

void Address::setStreet(const string str) {
    street = str;
}

void Address::setCity(const string ct) {
    city = ct;
}

void Address::setState(const string st) {
    state = st;
}

void Address::setPin(int pn) {
    pin = pn;
}

string Address::getStreet() const {
    return street;
}

string Address::getCity() const {
    return city;
}

string Address::getState() const {
    return state;
}

int Address::getPin() const {
    return pin;
}

void Address::display() const {
    cout << "Street: " << street << endl;
    cout << "City: " << city << endl;
    cout << "State: " << state << endl;
    cout << "Pincode: " << pin << endl;
}
