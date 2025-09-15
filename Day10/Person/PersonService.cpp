#include<iostream>
#include<cstring>
#include"PersonService.h"
using namespace std;

Person* PersonService::pArr[MAX_PERSONS];
int PersonService::cnt=0;

void PersonService::addPerson(){
	char *name;
	char * street;
	char* city;
	char* state;
	int pin;
	cout<<"Enter name :"<<endl;
	name=new char[50];
	cin>>name;
	cout<<"Enter Street :"<<endl;
	street=new char[50];
	cin>>street;
	cout<<"Enter City :"<<endl;
	city=new char[50];
	cin>>city;
	cout<<"Enter State :"<<endl;
	state=new char[50];
	cin>>state;
	cout<<"Enter Pincode :"<<endl;
	cin>>pin;
	
	pArr[cnt++]=new Person(name,street,city,state,pin);
	
	cout<<"Person Added successfuly at position "<<cnt-1<<endl;
}

//display all

void PersonService::displayAll(){
	for(int i=0;i<cnt;i++){
		pArr[i]->display();
	}
}

//search by id
Person* PersonService::searchById(int id){
	for(int i=0;i<cnt;i++){
		if(pArr[i]->getId()==id){
			return pArr[i];
		}
		
	}
	
	return nullptr;

}

//search by name
Person* PersonService::searchByName(const char* name){
	for(int i=0;i<cnt;i++){
		if(strcmp(pArr[i]->getName(),name)==0){
			return pArr[i];
		}
		
	}
	return nullptr;
}

//modify space by id
bool PersonService::modifyAddress(int id){
	for(int i=0;i<cnt;i++){
		if(pArr[i]->getId()==id){
			int pin;
        	char street[50],city[50],state[50];
			cout<<"Enter Street :"<<endl;
			cin>>street;
			cout<<"Enter City :"<<endl;
			cin>>city;
			cout<<"Enter State :"<<endl;
			cin>>state;
			cout<<"Enter Pincode :"<<endl;
			cin>>pin;
			pArr[i]->setAddress(street,city,state,pin);
			return true;
			
		}
		
	}
	return false;
	
}

//find address by id
void PersonService::findAddrById(int id){
	for(int i=0;i<cnt;i++){
		if(pArr[i]->getId()==id){
			pArr[i]->getAddress().display();
			
			
			
		}
		
	}
}

//
void PersonService::displayAllPersonInCity(const char* ct){
	for(int i=0;i<cnt;i++){
		if(strcmp(pArr[i]->getAddress().getCity(),ct)==0){
			pArr[i]->display();
		}
		
	}
}















