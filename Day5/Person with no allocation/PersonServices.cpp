#include<iostream>
#include<cstring>
#include "Person.h"
#include"PersonService.h"
using namespace std;
	Person PersonServices::parr[SIZE];
    int PersonServices::count=0;		
		Person PersonServices::accept(){
			int Id;
			char name[SIZE];
			char addr[SIZE];
			int age;
			cout<<"Enter Id"<<endl;
			cin>>Id;
			cout<<"Enter name"<<endl;
			cin>>name;
			cout<<"Enter address"<<endl;
			cin>>addr;
			cout<<"Enter age"<<endl;
			cin>>age;
			return Person(Id,name,addr,age);
		}
		
		
		
		//Add person 
		void PersonServices::addPerson(Person &p){
			if(count<SIZE){
				parr[count]=p;
				cout<<"Person added at "<<count<<" position";
             			count++;
			}else{
				cout<<"Memory is full"<<endl;
			}
			
			
		}
		
		//search by id
	     Person * PersonServices::searchById(int id){
			for(int i=0;i<count;i++){
				if(parr[i].getId()==id){
					return &parr[i];
				}
			}
			return nullptr;
		}
		
		//Display all
		void PersonServices::displayAll(){
			for(int i=0;i<count;i++){
				parr[i].display();
		}
	}
		
		//search by name
		Person* PersonServices::searchByName(char name[]){
			for(int i=0;i<count;i++){
				if(strcmp(parr[i].getName(), name) == 0){
					return &parr[i];
				}else{
					cout<<"Not found"<<endl;
				}
			}
			return nullptr;
		}
		
		
		//sort by id
		void PersonServices::sortById(){
			Person temp;;
			for(int i=0;i<count-1;i++){
				for(int j=0;j<count-i-1;j++){
					if(parr[i].getId()>parr[i+1].getId()){
						temp=parr[i];
						parr[i]=parr[i+1];
						parr[i+1]=temp;
					}
				}
			}
		}
		
		//sort by name
		void PersonServices::sortByName(){
			Person temp;
            		for(int i = 0; i < count - 1; i++){
                		for(int j = 0; j < count - i - 1; j++){
                    			if(strcmp(parr[j].getName(), parr[j+1].getName()) > 0){
                        			temp = parr[j];
                        			parr[j] = parr[j+1];
                        		parr[j+1] = temp;
                    			}
                		}
            		}
		}
		
		//Modify baddress by Id
		Person* PersonServices::modifyAddressbyId(int id,char addr[]){
			for(int i=0;i<count;i++){
				if(parr[i].getId()==id){
					parr[i].setAddr(addr);
					return &parr[i];
				}
			}
			return nullptr;
		}
		


