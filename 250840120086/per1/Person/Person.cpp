#include<iostream>
#include<cstring>
#include"Person.h"

using namespace std;

int Person::count=1;
//constructor
Person::Person(){
	id=0;
	name=nullptr;
}
	   	
Person::Person(const char* nm,const char * str,const char* ct,const char* st,int pn):addr(str,ct,st,pn){
	id=count++;
	
	name=new char[strlen(nm)+1];
	strcpy(name,nm);
}
	   	
//destructor
Person::~Person(){
	if(name)
		delete[] name;
}
	   	
	   	
//setters
//void Person::setId(int id){
//	this->id=id;
//}

void Person::setName(const char* nm){
    if (name != nullptr) {
        delete[] name;
    }
    name = new char[strlen(nm) + 1];
    strcpy(name, nm);
}

void Person::setAddress(const char * str,const char* ct,const char* st,int pn){
	addr.setStreet(str);
	addr.setCity(ct);
	addr.setState(st);
	addr.setPin(pn);
}   	

//getters
int Person::getId(){
	return id;
}

const char* Person::getName(){
	return name;
}

Address& Person::getAddress(){
	return addr;
}
	   	
//display
void Person::display(){
	cout<<"Id : "<<id<<endl;
	cout<<"Name : "<<name<<endl;
	addr.display();

}
