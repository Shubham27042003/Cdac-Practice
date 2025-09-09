#ifndef PERSON_H
#define PERSON_H

#include "Address.h"
#include <string>

class Person {
    private:
        int id;
        string name;
        Address addr;
        static int count;

    public:
        Person();
        Person(const string name, const string str, const string ct, const string st, int pn);
        
        // Destructor
        ~Person();

        // Setters
        void setName(const string name);
        void setAddress(const string str, const string ct, const string st, int pn);

        // Getters
        int getId() const;
        string getName() const;
        Address getAddress();

        // Display
        void display() const;
};

#endif
