#ifndef SPORTS_H
#define SPORTS_H

#include <iostream>
#include <string>
using namespace std;

class Sports {
    string sportsName;
    double fees;
public:
    Sports();
    Sports(string s, double f);
    string getSportsName() const;
    double getFees() const;
    void display() const;
};

#endif
