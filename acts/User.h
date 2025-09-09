#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
using namespace std;

class User {
protected:
    int dataUsage;
public:
    User(int data){
        dataUsage=data;
    }
    virtual ~User() {}

    virtual void calculateBill(string discountCode="") = 0;
};

#endif
