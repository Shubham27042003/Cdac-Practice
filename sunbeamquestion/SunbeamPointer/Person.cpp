#include "Person.h"

Person::Person() {}
Person::Person(string n, int a){
    name=n;
    age=a;
}

void Person::display() const {
    cout << "Name: " << name << ", Age: " << age;
}

string Person::getName() const {
    return name;
}
