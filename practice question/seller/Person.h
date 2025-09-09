#ifndef PERSON__
#define PERSON__
#include<iostream>
#include<string>
using namespace std;

class Person{
    private:
        string sname;
    public:
        Person();
        Person(string snm);
        ~Person();


        void setSname(string snm);

        string getSname()const;


        void display()const;
};
#endif