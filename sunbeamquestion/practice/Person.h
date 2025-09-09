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
    Person(string nm, int ag);
    virtual ~Person();

    void setName(string nm);
    void setAge(int ag);

    string getName() const;
    int getAge() const;

    virtual void display() const;
};
#endif
