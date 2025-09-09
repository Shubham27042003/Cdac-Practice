#include<iostream>
#include<string>
#include"Person.h"
#include"Product.h"
using namespace std;


Product::Product(){
    pid=0;
    pname="";
    price=0;
}
        Product::Product(int id,string name,int prc){
            pid=id;
            pname=name;
            price=prc;
        }
        Product::~Product(){}

        void Product::setPid(int id){
            pid=id;
        }
        void Product::setPname(string name){
            pname=name;
        }
        void Product::setprice(int prc){
            price=prc;
        }


        int Product::getPid(){
            return pid;
        }
        string Product::getPname(){
            return pname;
        }
        int Product::getPrice(){
            return price;
        }

        void Product::display(){
            cout<<"Product id is "<<pid<<endl;
            cout<<"Product name is "<<pname<<endl;
            cout<<"Product price is "<<price<<endl;
        }