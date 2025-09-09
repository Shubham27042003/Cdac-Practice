#ifndef BASICUSER_H
#define BASICUSER_H

#include "User.h"

class BasicUser : public User {
public:
    BasicUser(int data) : User(data) {}
    void calculateBill(string discountCode="");
};

#endif
