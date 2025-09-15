#include<iostream>
#include<cstring>
#include"Person.h"
using namespace std;
		//Default constructor
		Person::Person(){
			Id=0;
			name[0]='\0';
			addr[0]='\0';
			age=0;
		}
		
		//Parametarised constructor
	Person::Person(int Id, char name[SIZE], char addr[SIZE], int age) {
    this->Id = Id;

    strncpy(this->name, name, SIZE - 1);
    this->name[SIZE - 1] = '\0';

    strncpy(this->addr, addr, sizeof(this->addr)-1);
    this->addr[sizeof(this->addr)-1] = '\0';

    this->age = age;
}

	//setters
	void Person::setName(const char *name) {
    strncpy(this->name, name, SIZE - 1);
    this->name[SIZE - 1] = '\0';
}

	void Person::setAddr(const char *addr) {
    strncpy(this->addr, addr, sizeof(this->addr)-1);
    this->addr[sizeof(this->addr)-1] = '\0';
}

		
		
		//Getter methos
		int Person::getId(){
			return this->Id;
		}
		
		const char * Person::getName(){
			return this->name;
		}
		
		const char *Person::getAddress(){
			return this->addr;
		}
		
		int Person::getAge(){
			return this->age;
		}
		
		//Display user data
		void Person::display(){
			cout<<"Id : "<<Id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Address : "<<addr<<endl;
			cout<<"Age : "<<age<<endl;
		}
		
