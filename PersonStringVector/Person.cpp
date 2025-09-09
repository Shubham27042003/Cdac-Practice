#include<iostream>
#include "Person.h"

using namespace std;

int Person::count = 1;

Person::Person(){
    id=0;
    name="";
    addr;
}

Person::Person(const string nm, const string str, const string ct, const string st, int pn):addr(str, ct, st, pn) {
    id=count++;
    name=nm;
}
Person::~Person() {}

void Person::setName(const string nm) {
    name = nm;
}

void Person::setAddress(const string str, const string ct, const string st, int pn) {
    addr.setStreet(str);
    addr.setCity(ct);
    addr.setState(st);
    addr.setPin(pn);
}

int Person::getId() const {
    return id;
}

string Person::getName() const {
    return name;
}

Address Person::getAddress() {
    return addr;
}

void Person::display() const {
    cout << "Id: " << id << endl;
    cout << "Name: " << name << endl;
    addr.display();
}
