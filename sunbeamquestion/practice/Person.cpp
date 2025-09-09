#include "Person.h"
using namespace std;

Person::Person(){
    name="";
    age=0;
}
Person::Person(string nm, int ag){
    name=nm;
    age=ag;
}
Person::~Person() {}

void Person::setName(string nm) {
     name = nm;
}
void Person::setAge(int ag) {
     age = ag;
}

string Person::getName() const { 
    return name; 
}
int Person::getAge() const {
     return age;
}

void Person::display() const {
    cout << "Name: " << name << ", Age: " << age << endl;
}
