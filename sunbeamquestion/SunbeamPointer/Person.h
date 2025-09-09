#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person();
    Person(string n, int a);
    virtual void display() const;
    string getName() const;
};

#endif
