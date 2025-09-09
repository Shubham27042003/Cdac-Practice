#ifndef PREMIUMUSER_H
#define PREMIUMUSER_H

#include "User.h"

class PremiumUser : public User {
public:
    PremiumUser(int data) : User(data) {}
    void calculateBill(string discountCode="");
};

#endif
