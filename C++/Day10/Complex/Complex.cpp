#include<iostream>
#include"Complex.h"
#include<cstring>
using namespace std;

Complex::Complex(){
    cout<<"in default constructor"<<endl;
      i=0;
      j=0;
      //name=nullptr;
    }
    
    Complex::Complex(int i,int j){
    cout<<"in parametrised constructor"<<endl;
      this->i=i;
      this->j=j;
      //deep copy
      //name=new char[strlen(nm)+1];
      //strcpy(name,nm);
      
    }
    
    //copy constuctor
    Complex::Complex(Complex& ob){
      cout<<"in copy constructor"<<endl;
       this->i=ob.i;
       this->j=ob.j;
       //deep copy
       //name=new char[strlen(ob.name)+1];
      //strcpy(name,ob.name);
   }

Complex& Complex::operator ++(){
	cout<<"PreIncrement Operator"<<endl;
	this->i++;
	this->j++;
	return *this;
}

Complex& Complex::operator ++(int){
	cout<<"PostIncrement Operator"<<endl;
	Complex temp=*this;
	this->i++;
	this->j++;
	return temp;
}

Complex& Complex::operator --(){
	cout<<"PreIncrement Operator"<<endl;
	this->i--;
	this->j--;
	return *this;
}

Complex& Complex::operator --(int){
	cout<<"PostIncrement Operator"<<endl;
	Complex temp=*this;
	this->i--;
	this->j--;
	return temp;
}

ostream& operator <<(ostream& out,const Complex& c){
	out<<c.i<<" + "<<c.j<<endl;
	return out;
}

istream& operator >>(istream& in, Complex& c){
	cout<<"Enter real part : ";
	in>>c.i;
	cout<<"\nEnter IMG part : ";
	in>>c.j;
	return in;
}

void Complex::display()const{
      cout<<i<<"+"<<j<<"j"<<endl;
     
   }
   
