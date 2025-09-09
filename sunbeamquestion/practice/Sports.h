#ifndef SPORTS_H
#define SPORTS_H
#include <iostream>
#include <string>
using namespace std;

class Sports {
    string name;
    float fees;
public:
    Sports();
    Sports(string nm, float f);
    ~Sports();

    string getName() const;
    float getFees() const;

    void setName(string nm);
    void setFees(float f);

    void display() const;
};
#endif
