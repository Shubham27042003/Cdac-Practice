#include<iostream>
#include<string>
#include"Person.h"
using namespace std;

Person::Person(){
    sname="";
}
        Person::Person(string snm){
            sname=snm;
        }
        Person::~Person(){}


        void Person::setSname(string snm){
            sname=snm;
        }

        string Person::getSname()const{
            return sname;
        }


        void Person::display()const{
            cout<<"Name is "<<sname;
        }