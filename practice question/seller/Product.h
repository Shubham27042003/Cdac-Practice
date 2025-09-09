#ifndef PRODUCT__
#define PRODUCT__
#include<iostream>
#include<string>
using namespace std;
class Product{
    private:
        int pid;
        string pname;
        int price;
    public:
        Product();
        Product(int id,string name,int prc);
        ~Product();

        void setPid(int id);
        void setPname(string name);
        void setprice(int prc);


        int getPid();
        string getPname();
        int getPrice();

        void display();
};
#endif
