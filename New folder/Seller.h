#ifndef SELLER__
#define SELLER__

#include<vector>
#include"Person.h"
class Seller:public Person{
    private:
        int sid;
        Product pdr;
    public:
       static vector<Product>pvc;
        Seller();
        Seller(int sid,string name);
        ~Seller();

        void setSid(int sid);
        int getSid();

        void display();
};
#endif