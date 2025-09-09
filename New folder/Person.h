#ifndef PERSON__
#define PERSON__

#include<iostream>
using namespace std;
class Person{
    private:
        string name;
    public:
        Person();
        Person(string nm);
        ~Person();
        
        void setName(string nm);
        string getName();

        void display();
        
};
#endif;