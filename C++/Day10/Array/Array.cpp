#include<iostream>
#include"Array.h"
using namespace std;

Array::Array(){
	for(int i=0;i<5;i++){
		arr1[i]=0;	
	}
	
}

Array::Array(int a1[]){
	for(int i=0;i<5;i++){
		arr1[i]=a1[i];
			
	}

}

//copy constuctor
Array::Array(Array& other){
	for(int i=0;i<5;i++){
		arr1[i]=other.arr1[i];
	}
}
    
Array Array::operator +(Array& other)const{
	int res[5];
	for(int i=0;i<5;i++){
		res[i]=arr1[i]+other.arr1[i];
	}
	return res;
}

Array Array::operator -(Array& other)const{
	int res[5];
	for(int i=0;i<5;i++){
		res[i]=arr1[i]-other.arr1[i];
	}
	return res;

}

void Array::display()const{
	for(int i=0;i<5;i++){
		cout<<this->arr1[i]<<" ";
	}
	cout<<endl;
}
