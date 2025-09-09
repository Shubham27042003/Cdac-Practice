#include "Shape.h"

class Rectangle : public Shape {
	double length;
	double breadth;
	
	public:
		Rectangle();
		Rectangle(const char* color, double length,double breadth);
		~Rectangle();
		
		// Getter Methods
		double getlength();
		double getBreadth();
		
		
		 // Setter Methods
		 void setLength(double len);
		 void setBreadth(double bt);
		 
		 
		 // Calculate Functions
		 double calcArea();
		 double calcPerimeter();
		 
		 // Display
		 void display() const;
};
