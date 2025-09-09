#ifndef PRODUCT_H
#define PRODUCT_H
#include<iostream>
#include<string>
using namespace std;
class product{
	int pid;
	string pname;
	float price;
	public:
	product(){
	pid=0;
	pname="";
	price=0.0;
	
	}
	product(int id,int name,int pr){
		pid=id;
		pname=name;
		price=pr;	
	}
	void setpid(int id){
		pid=id;
	}
	void setpname(string name){
		pname=name;
	}
	void setprice(float pr){
		price=pr;
	}
	
};
#endif
