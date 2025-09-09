#include "Circle.h"
#include "Triangle.h"
#include "Square.h"
#include "Rectangle.h"
#include "ShapeService.h"
#include <iostream>
#include<algorithm>
#include <cstring>
using namespace std;

Shape* ShapeService::sArr[100];
int ShapeService::count = 0;

void ShapeService::addShape(int n) {
	char color[10];
	
	cout << "Enter color: ";
	cin >> color;
	
	if (n == 1) {
		double s1, s2, base, height;
		cout << "Enter S1: ";
		cin >> s1;
		cout << "Enter S2: ";
		cin >> s2;
		cout << "Enter base: ";
		cin >> base;
		cout << "Enter height: ";
		cin >> height;
		
		sArr[count++] = new Triangle(color, s1, s2, base, height);
	}
	
	else if (n == 2) {
		double radius;
		cout << "Enter radius: ";
		cin >> radius;
		
		sArr[count++] = new Circle(color, radius);
	}else if(n==3){
		double side;
		cout<<"Enter side : ";
		cin>>side;
		
		sArr[count++]=new Square(color,side);
	}else if(n==4){
		double length,breadth;
		cout<<"Enter length and breadth : ";
		cin>>length >>breadth;
		
		sArr[count++]=new Rectangle(color,length,breadth);
	}
}

void ShapeService::displayAll() {
	cout << "All shapes are:" << endl;
	for (int i=0; i<count; i++) {
		sArr[i]->display();
	}
}

void ShapeService::displayTriangles() {
	cout << "Triangles are:" << endl;
	for (int i=0; i<count; i++) {
		if (dynamic_cast<Triangle*>(sArr[i]))
			sArr[i]->display();
	}
}

void ShapeService::displayCircles() {
	cout << "Circles are:" << endl;
	for (int i=0; i<count; i++) {
		if (dynamic_cast<Circle*>(sArr[i])){
			sArr[i]->display();
			cout << endl;
		}
	}
}

void ShapeService::displaySquares(){
	cout << "Squares are:" << endl;
	for (int i=0; i<count; i++) {
		if (dynamic_cast<Square*>(sArr[i])){
			sArr[i]->display();
			cout << endl;
		}
	}
}

void ShapeService::displayRectangles(){
	cout << "Rectangles are:" << endl;
	for (int i=0; i<count; i++) {
		if (dynamic_cast<Rectangle*>(sArr[i])){
			sArr[i]->display();
			cout << endl;
		}
	}
}

int ShapeService::searchByColor(const char* color, Shape* result[100]){
	int cnt = -1;
	for (int i=0; i<count; i++) {
		if (strcmp(sArr[i]->getColor(), color) == 0) {
			result[++cnt] = sArr[i];
		}
	}
	return cnt;
}


void ShapeService::sortOnColor(){
	for(int i=0;i<count;i++){
		for(int j=0;j<count-i-1;j++){
			//char* temp=sArr[i]->getColor();
			if(strcmp(sArr[j]->getColor(),sArr[j+1]->getColor())>0){
				Shape* temp=sArr[j];
				sArr[j]=sArr[j+1];
				sArr[j+1]=temp;
			}
		}
	}
}

void ShapeService::calculateAllAreas(){
	for (int i=0; i<count; i++) {
		double area=0;
		area=sArr[i]->calcArea();
		sArr[i]->display();
		cout<<"Area is : "<<area<<endl;
	}
}

void ShapeService::calculateAllPerimeters(){
	for (int i=0; i<count; i++) {
		double perimeter=0;
		perimeter=sArr[i]->calcPerimeter();
		sArr[i]->display();
		cout<<"Perimeter is : "<<perimeter<<endl;
	}
}





