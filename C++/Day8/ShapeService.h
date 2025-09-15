#include "Shape.h"

class ShapeService {
        
	static Shape* sArr[100];
	static int count;
	
	public:
		static void addShape(int n);
		static void displayAll();
		static void displayTriangles();
		static void displayCircles();
		static int searchByColor(const char* color, Shape* result[100]);
		static void displaySquares();
		static void displayRectangles();
		static void calculateAllAreas();
		static void sortOnColor();
		static void calculateAllPerimeters();
};
