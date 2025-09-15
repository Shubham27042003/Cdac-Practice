#include<iostream>
#include"Shape.h"
#include"Rectangle.h"
using namespace std;

Rectangle::Rectangle(){
	length=0;
	breadth=0;
}
Rectangle::Rectangle(const char* color, double length,double breadth):Shape(color){
	this->length=length;
	this->breadth=breadth;
}

Rectangle::~Rectangle(){};
		
// Getter Methods
double Rectangle::getlength(){
	return length;
}
double Rectangle::getBreadth(){
	return breadth;
}
		
		
// Setter Methods
void Rectangle::setLength(double len){
	this->length=len;
}
void Rectangle::setBreadth(double bt){
	this->breadth=bt;
}
		 
		 
// Calculate Functions
double Rectangle::calcArea(){
	return length*breadth;
}
double Rectangle::calcPerimeter(){
	return 2*(length+breadth);
}
		 
// Display
void Rectangle::display() const{
	cout<<"\n Shape : Rectangle"<<endl;
	Shape::display();
	cout<<"Length : "<<length<<endl;
	cout<<"Breadth : "<<breadth<<endl;
}
