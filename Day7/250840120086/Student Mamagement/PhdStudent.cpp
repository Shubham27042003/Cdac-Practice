#include<iostream>
#include"PhdStudent.h"
#include<cstring>
using namespace std;

char* PhdStudent::degree="PHD";
//default constructor
PhdStudent::PhdStudent(){
	cout<<"in PhdStudent default constructor"; 
	thsName=nullptr;
	thsMark=0;
}

//parameterised constructor
PhdStudent::PhdStudent(int id,char*  nm,char* addr,int m1,int m2,int m3,char* tn,int tm):Student(id,nm,addr,m1,m2,m3){
	cout<<"in PhdStudent parametrised constructor"<<endl;;
	thsName=new char[strlen(tn)+1];
	strcpy(this->thsName,tn);
	this->thsMark=tm;
	

}

//destructor

PhdStudent::~PhdStudent(){
	cout<<"in PhdStudent destructor"<<endl;
    if(thsName)
        delete[] thsName;
}

//setter methods
inline void PhdStudent::setThesisName(char* tn){
	delete[] thsName;
    thsName=new char[strlen(tn)+1];
	strcpy(this->thsName,tn);
}


inline void PhdStudent::setThesisMark(int tm){
	this->thsMark=tm;
}




//getter methods 

inline char* PhdStudent::getThesisName(){
	return thsName;
}

inline int PhdStudent::getThesisMark(){
	return thsMark;
}


//display

void PhdStudent::display() const{
	Student::display();
	cout<<"Thesis Name : "<<thsName<<endl;
	cout<<"Thesis Marks : "<<thsMark<<endl;
	cout<<"Degree : "<<degree<<endl;
	
}

