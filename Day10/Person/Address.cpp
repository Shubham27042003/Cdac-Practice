#include<iostream>
#include<cstring>
#include"Address.h"
using namespace std;

Address::Address(){
	street=nullptr;
	city=nullptr;
	state=nullptr;
	pin=0;
}

Address::Address(const char * str,const char* ct,const char* st,int pn){
	street=new char[strlen(str)+1];
	strcpy(street,str);
	
	city=new char[strlen(ct)+1];
	strcpy(city,ct);
	
	state=new char[strlen(st)+1];
	strcpy(state,st);
	
	this->pin=pn;

}

//destructor
Address::~Address(){
	if(street)
		delete[]street;
	if(city)
		delete[] city;
	if(state)
		delete[] state;
}


//setters

void Address::setStreet(const char* str){
	delete[] street;
	street=new char[strlen(str)+1];
	strcpy(street,str);
}
		
void Address::setCity(const char* ct){
	delete[] city;
	city=new char[strlen(ct)+1];
	strcpy(city,ct);
}
		
void Address::setState(const char* st){
	delete[] state;
	state=new char[strlen(st)+1];
	strcpy(state,st);
}

void Address::setPin(int pn){
	pin=pn;
}
		

//getters

const char* Address::getStreet(){
	return street;
}

const char* Address::getCity(){
	return city;
}

const char* Address::getState(){
	return state;
}

int Address::getPin(){
	return pin;
}
	
	
//Display
void Address::display()const{
	cout<<"Street :"<<street<<endl;
	cout<<"City :"<<city<<endl;
	cout<<"State :"<<state<<endl;
	cout<<"Pincode :"<<pin<<endl;
}
