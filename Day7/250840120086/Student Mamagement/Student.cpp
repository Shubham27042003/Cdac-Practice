#include<iostream>
#include<cstring>
#include"Student.h"
using namespace std;

int Student::passingperc=35;
//default constructor
Student::Student(){
	cout<<"in employee default constructor"; 
	id=0;
	name=nullptr;
	address=nullptr;
	mark1=0;
	mark2=0;
	mark3=0;
	//degree=nullptr;
}

//parameterised constructor
Student::Student(int id,char*  nm,char* addr,int m1,int m2,int m3){
	cout<<"in Student parametrised constructor"<<endl;;
	this->id=id;
	name=new char[strlen(nm)+1];
	strcpy(this->name,nm);
	address=new char[strlen(addr)+1];
	strcpy(this->address,addr);
	this->mark1=m1;
	this->mark2=m2;
	this->mark3=m3;
	//degree=new char[strlen(deg)+1];
	//strcpy(this->degree,deg);

}

//destructor

Student::~Student(){
	cout<<"in employee destructor"<<endl;;
   	if(name)
    		delete[] name;
   	if(address)
    		delete[] address;
   	//if(degree)
    	//	delete[] degree;
}

//setter methods
inline void Student::setId(int id){
	this->id=id;
}

inline void Student::setName(char *nm){
	delete[] name;
	name=new char[strlen(nm)+1];
	strcpy(this->name,nm);
}
			
inline void Student::setAddress(char *addr){
	delete[] address;
	address=new char[strlen(addr)+1];
	strcpy(this->address,addr);
}

inline void Student::setMark1(int m1){
	this->mark1=m1;
}

inline void Student::setMark2(int m2){
	this->mark2=m2;
}
			
inline void Student::setMark3(int m3){
	this->mark3=m3;
}

//inline void Student::setDegree(char *deg){
//	delete[] degree;
//	degree=new char[strlen(deg)+1];
//strcpy(this->degree,deg);
//}


//getter methods 

int Student::getId(){
	return id;
}

int Student::getMark1(){
	return mark1;
}

int Student::getMark2(){
	return mark2;
}

int Student::getMark3(){
	return mark3;
}

const char* Student::getName(){
	return name;
}
			
const char* Student::getAddress(){
	return address;
}
			


//display

void Student::display() const{
	cout<<"Student details:"<<endl;
	cout<<"Student Id. : "<<id<<endl;
	cout<<"Student Name : "<<name<<endl;
	cout<<"Student Address : "<<address<<endl;
	cout<<"Mark 1: "<<mark1<<endl;
	cout<<"Mark 2: "<<mark2<<endl;
	cout<<"Mark 3: "<<mark3<<endl;
	cout<<"Passing percentage : "<<passingperc<<endl;
	//cout<<"Student Degree: "<<degree<<endl;
	
}		

