#ifndef SELLER__
#define SELLER__
#include<iostream>
#include<string>
#include<vector>
#include"Person.h"
#include"Product.h"
using namespace std;

class Seller: public Person{
    private:
        int sid;
    public:
        Seller();
        Seller(string snm,int id);
        ~Seller();
        vector<Product*>addp;
        void addPrduct(Product* p);
        void displayProduct();
        void display();

        void setSid(int id);

        int getSid();

        
};
#endif