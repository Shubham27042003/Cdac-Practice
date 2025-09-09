#include"Person.h"

Person::Person(){}
Person::Person(string nm){
    name=nm;
}
Person::~Person(){}
        
void Person::setName(string nm){
    this->name=nm;
}
string Person::getName(){
    return name;
}

void Person::display(){
    cout<<"Name of Person is "<<name<<endl;
}