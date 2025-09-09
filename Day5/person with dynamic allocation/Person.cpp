#include<iostream>
#include<cstring>
#include"Person.h"
using namespace std;


//Default
Person::Person(){
    id=0;
    name=nullptr;
    address=nullptr;
}

//Parametrized
Person::Person(int id,const char* name,const char* address){
    this->id=id;
    this->name=new char[strlen(name)+1];
    strcpy(this->name,name);
    this->address=new char[strlen(address)+1];
    strcpy(this->address,address);
}

//Destuctor
Person::~Person(){
    if(name){
        delete[] name;
    }
    if(address){
        delete[] address;
    }
}

//Setter

void Person::setId(int id){
    this->id=id;
}
void Person::setName(const char* name){
    if (this->name) {
        delete[] this->name;
    }
    this->name = new char[strlen(name)+1];
    strcpy(this->name,name);
    
}
   void Person::setAddress(const char* Address){
    if (this->address) {
        delete[] this->address;
    }
    this->address = new char[strlen(Address) + 1];
    strcpy(this->address, Address);
}


//Getter

int Person::getId(){
    return id;
}

const char* Person::getName(){
    return name;
}
const char* Person::getAddress(){
    return address;
}

//display
void Person::display(){
    cout<<"Id is "<<id<<endl;
    cout<<"Name is "<<name<<endl;
    cout<<"Adrdess is "<<address<<endl;
}
