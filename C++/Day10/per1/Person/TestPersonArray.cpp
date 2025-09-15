#include<iostream>
#include"PersonService.h"
using namespace std;

int main(){
	int ch;
	
	do{
		cout<<"\n1. Add new Person"<<endl;
        	cout<<"2. Display All Person"<<endl;
        	cout<<"3. Search by Id"<<endl;
        	cout<<"4. Search by Name"<<endl;
        	cout<<"5. Modify address"<<endl;
		cout<<"6. find address by id of Person"<<endl;
		cout<<"7. display all Person stay in given city"<<endl;
        	cout<<"8. Exit"<<endl;
        	
        	cout<<"Enter your choice : "<<endl;
        	cin>>ch;
        	
        	switch(ch){
        		case 1:
        			PersonService::addPerson();
        			break;
        		case 2:
        			PersonService::displayAll();
        			break;
        		case 3:{
        			int id;
        			cout<<"Enter id you want to search : "<<endl;
        			cin>>id;
        			Person* p1=PersonService::searchById(id);
        			if(p1){
        				cout<<"Person Found"<<endl;
        				p1->display();
        			}else{
        				cout<<"Person Not Found"<<endl;
        			}
					break;
        		}
        		case 4:{
        			char name[50];
        			cout<<"Enter name you want to search : "<<endl;
        			cin>>name;
        			Person* p1=PersonService::searchByName(name);
        			if(p1){
        				cout<<"Person Found"<<endl;
        				p1->display();
        			}else{
        				cout<<"Person Not Found"<<endl;
        			}
					break;
        		}
        		case 5:{
        			int id;
        			cout<<"Enter id of person whoes address you want to modify : "<<endl;
        			cin>>id;
        			
        			bool ans=PersonService::modifyAddress(id);
        			if(ans){
        				cout<<"Address of person with id "<<id<<" is updated successfuly"<<endl;
        			}else{
        				cout<<"Person Not Found"<<endl;
        			}
					break;
        		}
        		case 6:{
        			int id;
        			cout<<"Enter id of which address you want to search : "<<endl;
        			cin>>id;
        			PersonService::findAddrById(id);
        			break;
        		}
        		case 7:{
        			char city[50];
        			cout<<"Enter City :"<<endl;
				cin>>city;
        			PersonService::displayAllPersonInCity(city);
        			break;
        		
        		}
        		default:
        			cout<<"Enter valid choice"<<endl;
        			break;
        	}
	}while(ch!=8);
	return 0;
}
