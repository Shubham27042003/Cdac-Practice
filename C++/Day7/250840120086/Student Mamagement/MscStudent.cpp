#include<iostream>
#include"MscStudent.h"
#include<cstring>
using namespace std;

char* MscStudent::degree="MSC";
//default constructor
MscStudent::MscStudent(){
	cout<<"in MscStudent default constructor"; 
	spSubMark=0;
	langMark=0;
}

//parameterised constructor
MscStudent::MscStudent(int id,char*  nm,char* addr,int m1,int m2,int m3,int sm,int lm):Student(id,nm,addr,m1,m2,m3){
	cout<<"in MscStudent parametrised constructor"<<endl;;
	this->spSubMark=sm;
	this->langMark=lm;
	

}

//destructor

MscStudent::~MscStudent(){
	cout<<"in MscStudent destructor"<<endl;
}

//setter methods
inline void MscStudent::setSpecialSubMark(int sm){
	this->spSubMark=sm;
}


inline void MscStudent::setLangMark(int lm){
	this->langMark=lm;
}




//getter methods 

inline int MscStudent::getSpecialSubMark(){
	return spSubMark;
}

inline int MscStudent::getLangMark(){
	return langMark;
}


//display

void MscStudent::display() const{
	Student::display();
	cout<<"Special Subject mark : "<<spSubMark<<endl;
	cout<<"Language Subject Mark : "<<langMark<<endl;
	cout<<"Degree : "<<degree<<endl;
	
}

