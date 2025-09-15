#include<iostream>
using namespace std;
class Complex{
  int i; 
  int j;
  char *name;
  public:
    Complex();
    Complex(int i,int j);
    //copy constuctor
    Complex(Complex& ob);
    
    Complex& operator ++();
    //post increment
    Complex& operator ++(int);
    
    Complex& operator --();
    //post increment
    Complex& operator --(int);
    
   friend ostream& operator <<(ostream& out,const Complex& c);
   friend istream& operator >>(istream& in,Complex& c);
   void display() const;
};







  
  
