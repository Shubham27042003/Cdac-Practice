#include"Seller.h"
#include"Product.h"
vector<Product>Seller::pvc;
Seller::Seller(){}
Seller::Seller(int sid,string name):Person(name){
    this->sid=sid;
}
Seller::~Seller(){}

void Seller::setSid(int sid){
    this->sid=sid;
}
int Seller::getSid(){
    return sid;
}

void Seller::display(){
    cout<<"Seller id is "<<sid<<endl;
    Person::display();
}