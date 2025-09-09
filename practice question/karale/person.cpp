/*create class person with name 
class saler id name
class product product id name price

each saler sales few product have proper 
1 add sealer -5
2 add product -5
3 display product by specific saler -5
4 display all salers display all products -5
5 use STL inheritance is compulsory -5
 
class 2*3=6
comments namming convention and modularity-4
*/
#ifndef PERSON_H
#define PERSON_H
#include<string>
#include<iostream>
using namespace std;
class person{
	string name;
	public:
	person(){
	name="";
	}
	person(string nm){
	name=nm;
	}
	void setname(string nm){
	name=nm;
	}
	string getname(){
	 return name;
	}
	virtual void display(){
	 cout<<"Name :"<<name<<endl;
	}

};
#endif

