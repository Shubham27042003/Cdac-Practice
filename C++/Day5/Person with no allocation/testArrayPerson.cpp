#include<iostream>
#include "PersonService.h"
using namespace std;

int main(){
	int ch;
	do{
		cout<<endl;
		cout<<"1. Accept & Add person"<<endl;
		cout<<"2. Search by id"<<endl;
		cout<<"3. display all"<<endl;
		cout<<"4. Search by name"<<endl;
		cout<<"5. sort by id"<<endl;
		cout<<"6. sort by name"<<endl;
		cout<<"7. modify address by id"<<endl;
		cout<<"8. exit"<<endl;
		
		cout<<"Enter your choice"<<endl;
		cin>>ch;
		switch(ch){
			case 1:{
				Person p=PersonServices::accept();
				PersonServices::addPerson(p);
				break;
				}
			case 2:{
				int id;
				cout<<"Enter id that you want to search"<<endl;
				cin>>id;
				Person* p1=PersonServices::searchById(id);
				if(p1){
					p1->display();
				}else{
					cout<<"Not Found"<<endl;
				}
				
				break;
				}
			case 3:{
				PersonServices::displayAll();
				break;
				}
			case 4:{
				char name[100];
				cout<<"Enter name that you want to search"<<endl;
				cin>>name;
				Person* p2=PersonServices::searchByName(name);
				if(p2){
					p2->display();
				}else{
					cout<<"Not Found"<<endl;
				}
				
				break;
				}
			case 5:{
					PersonServices::sortById();
					cout<<"Sorted array is"<<endl;
					PersonServices::displayAll();
					break;
					
				}
			case 6:{
					PersonServices::sortByName();
					cout<<"Sorted array by name is"<<endl;
					PersonServices::displayAll();
					break;
					
				}
			case 7:{
				int id;
				char address[SIZE];
				cout<<"Enter id whoes address you want to modify"<<endl;
				cin>>id;
				cout<<"Enter the modified address"<<endl;
				cin.ignore(); // flush leftover newline
				cin.getline(address, SIZE);

				Person* p3=PersonServices::modifyAddressbyId(id,address);
				if(p3){
					p3->display();
				}else{
					cout<<"Not Found"<<endl;
				}
				
				break;
				}
			case 8:
				cout<<"Thank You !!!"<<endl;
				break;
			default:
				cout<<"Enter valid choice"<<endl;
				
				
		}
	}while(ch!=8);

	return 0;
}
