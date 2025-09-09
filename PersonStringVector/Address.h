#ifndef ADDR_
#define ADDR_
#include <string>
using namespace std;

class Address {
    private:
        string street;
        string city;
        string state;
        int pin;

    public:
        Address();
        Address(const string str, const string ct, const string st, int pn);
        
        // Setters
        void setStreet(const string str);
        void setCity(const string ct);
        void setState(const string st);
        void setPin(int pn);

        // Getters
        string getStreet() const;
        string getCity() const;
        string getState() const;
        int getPin() const;

        // Display
        void display() const;
};

#endif
