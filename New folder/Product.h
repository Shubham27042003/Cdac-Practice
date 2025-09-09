#ifndef PRODUCT__
#define PRODUCT__
#include"Seller.h"
class Product{
    private:
        int pid;
        string pname;
        float price;
    public:
        Product();
        Product(int pid,string pname,float price);
        ~Product();

        void setPid(int pid);
        void setPname(string pname);
        void setPrice(float price);

        int getPid();
        string getPname();
        float getPrice();

        void display();


};
#endif