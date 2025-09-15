#include "Square.h"
#include "Shape.h"
#include <iostream>
using namespace std;

Square::Square() {
	side=0.0;
}

Square::Square(const char* color, double s1) : Shape(color) {
	side = s1;
}

Square::~Square() {}

double Square::getSide() {
	return side;
}



void Square::setSide(double s1) {
	this->side=s1;
}



double Square::calcArea() {
	return (side * side);
}

double Square::calcPerimeter() {
	return (4*side);
}

void Square::display() const {
	cout<<"\n Shape : Square"<<endl;
	Shape::display();
	cout << "Side-1: " << side << endl;
	
}
