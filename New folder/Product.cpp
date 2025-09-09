#include"Product.h"
Product::Product(){}
Product::Product(int pid,string pname,float price){
    this->pid=pid;
    this->pname=pname;
    this->price=price;
}
        Product::~Product(){}

        void Product::setPid(int pid){
            this->pid=pid;
        }
        void Product::setPname(string pname){
            this->pname=pname;
        }
        void Product::setPrice(float price){
            this->price=price;
        }

        int Product::getPid(){
            return pid;
        }
        string Product::getPname(){
            return pname;
        }
        float Product::getPrice(){
            return price;
        }

        void Product::display(){
             cout << "Product ID: " << pid<< endl;
             cout << "Product Name: " << pname << endl;
            cout << "Product Price: " << price<< endl;
        }