#ifndef SERVICE__
#define SERICE__

#include<iostream>
#include<string>
#include<vector>
#include"Person.h"
#include"Product.h"
#include"Seller.h"
using namespace std;
class Service{
    private:
        vector<Product*>p;
        vector<Seller*>s;
    public:
        void addSeller();
        void addProduct();
        void displaySpecific();
        void displayAllSellers();
        void displayAllPrd();

};
#endif