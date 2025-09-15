#include<iostream>
#include<cstring>
#include "MyClass.h"
using namespace std;

MyClass::MyClass(){
    cout<<"in default constructor"<<endl;
      i=0;
      j=0;
      k=0;
      name=nullptr;
      
}
    
MyClass::MyClass(int i,int j,int k,const char* nm){
    cout<<"in parametrised constructor"<<endl;
      this->i=i;
      this->j=j;
      this->k=k;

      name=new char[strlen(nm)+1];
      strcpy(this->name,nm);
           
}

    //copy constuctor
MyClass::MyClass(const MyClass& ob){   
        cout<<"in copy constructor"<<endl;
       this->i=ob.i;
       this->j=ob.j;
       this->k=ob.k;
        if (ob.name) {
            name = new char[strlen(ob.name) + 1];
            strcpy(name, ob.name);
        } else {
            name = nullptr;
        }
}
    
MyClass::~MyClass(){
        cout<<"in destructor"<<endl;
        delete[] name;
    }
    
     
     MyClass MyClass::operator+(const MyClass& other) const {
        cout << "Addition called" << endl;
        MyClass x;
        x.i = this->i + other.i;
        x.j = this->j + other.j;
        x.k = this->k + other.k;

        int len = strlen(this->name) + strlen(other.name) + 1;
        x.name = new char[len];
        strcpy(x.name, this->name);
        strcat(x.name, other.name);

        return x;
    }
    
    MyClass MyClass::operator -(const MyClass& other)const{
        cout<<"subtraction called"<<endl;
        MyClass x;
        x.i=this->i-other.i;
        x.j=this->j-other.j;
        x.k=this->k-other.k;
        if (this->name) {
            x.name = new char[strlen(this->name) + 1];
            strcpy(x.name, this->name);
        }

        return x;
    } 
    
    // * operator → multiply numbers, copy this->name
    MyClass MyClass::operator*(const MyClass& other) const {
        cout << "Multiplication called" << endl;
        MyClass x;
        x.i = this->i * other.i;
        x.j = this->j * other.j;
        x.k = this->k * other.k;

        if (this->name) {
            x.name = new char[strlen(this->name) + 1];
            strcpy(x.name, this->name);
        }

        return x;
    }

    // / operator → divide numbers, copy this->name
    MyClass MyClass::operator/(const MyClass& other) const {
        cout << "Division called" << endl;
        MyClass x;
        x.i = other.i ? this->i / other.i : 0;
        x.j = other.j ? this->j / other.j : 0;
        x.k = other.k ? this->k / other.k : 0;

        if (this->name) {
            x.name = new char[strlen(this->name) + 1];
            strcpy(x.name, this->name);
        }

        return x;
    }

    // == operator
    bool MyClass::operator==(const MyClass& other) const {
        return (i == other.i && j == other.j && k == other.k &&
                strcmp(name, other.name) == 0);
    }

    void MyClass::display() const {
        cout << "i : " << i << endl;
        cout << "j : " << j << endl;
        cout << "k : " << k << endl;
        cout << "Name : " << name << endl;
    }
