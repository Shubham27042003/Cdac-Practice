#include<iostream>
#include<cstring>
#include"PersonService.h"
#include<vector>
using namespace std;

vector<Person*> PersonService::pVec;
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
	
	pVec.push_back(new Person(name,street,city,state,pin));
	cnt=pVec.size();
	cout<<"Person Added successfuly at position "<<cnt-1<<endl;
	
}

//display all

void PersonService::displayAll(){
	for(int i=0;i<cnt;i++){
		pVec[i]->display();
	}
}

//search by id
Person* PersonService::searchById(int id){
	for(int i=0;i<cnt;i++){
		if(pVec[i]->getId()==id){
			return pVec[i];
		}
		
	}
	
	return nullptr;

}

//search by name
Person* PersonService::searchByName(const char* name){
	for(int i=0;i<cnt;i++){
		if(strcmp(pVec[i]->getName(),name)==0){
			return pVec[i];
		}
		
	}
	return nullptr;
}

//modify space by id
bool PersonService::modifyAddress(int id){
	for(int i=0;i<cnt;i++){
		if(pVec[i]->getId()==id){
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
			pVec[i]->setAddress(street,city,state,pin);
			return true;
			
		}
		
	}
	return false;
	
}

//find address by id
void PersonService::findAddrById(int id){
	for(int i=0;i<cnt;i++){
		if(pVec[i]->getId()==id){
			pVec[i]->getAddress().display();
			
			
			
		}
		
	}
}

//
void PersonService::displayAllPersonInCity(const char* ct){
	for(int i=0;i<cnt;i++){
		if(strcmp(pVec[i]->getAddress().getCity(),ct)==0){
			pVec[i]->display();
		}
		
	}
}















