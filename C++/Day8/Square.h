#include "Shape.h"

class Square : public Shape {
	double side;
	
	public:
		Square();
		Square(const char* color, double s1);
		~Square();
		
		// Getter Methods
		double getSide();
		
		
		 // Setter Methods
		 void setSide(double s1);
		 
		 
		 // Calculate Functions
		 double calcArea();
		 double calcPerimeter();
		 
		 // Display
		 void display() const;
};
