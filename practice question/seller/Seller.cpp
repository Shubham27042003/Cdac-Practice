#include<iostream>
#include<string>
#include<vector>
#include"Seller.h"
#include"Person.h"
#include"Product.h"        
        
        Seller::Seller(){
            sid=0;
        }
        Seller::Seller(string snm,int id):Person(snm){
            sid=id;
        }
        Seller::~Seller(){}
        void Seller::addPrduct(Product* p){
            addp.push_back(p);
        }
        void Seller::displayProduct(){
            cout<<"Added Products are "<<endl;
            for(auto p:addp){
                cout<<p->getPname()<<endl;
            }
        }
        void Seller::display(){
            cout<<"Seller id is "<<sid<<endl;
            Person::display();

        }

        void Seller::setSid(int id){
            sid=id;
        }

        int Seller::getSid(){
            return sid;
        }

    