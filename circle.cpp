#include "header_files/circle.h"
#define PI 3.14159
#include <iostream>

using namespace std;
/*
 *  Circle.cpp
 */

//put interesting/working part of class in here
//default constructor
void Circle::Circle() {
	radius = 0;
}

//copy constructor
void Circle::Circle(Circle c) {
	radius = c.getRadius();
}

//parametric constructor
void Circle::Circle(int r) {
	radius = r;
}

//accessor functions
int Circle::getRadius() {
	return radius;
}

//mutator functions
void Circle::setRadius(int r) {
	radius = r;
}

//	Point Circle?
bool Circle::isPoint() {
	if (radius==0)
		return true;
	else
		return false;
}

//	Functions

//	Area
	float Circle::area(){
		return PI*radius*radius;
	}

//	Diameter
	int Circle::diameter(){
		return 2*radius;
	}

//	Circumference
	float Circle::circumference(){
		return 2*PI*radius;
	}

//	Length of Arc Subtended
	float Circle::lengthArc(int degree){
		return degree * radius * PI / 180;

	}

//	Print Circle
	void Circle::printCircle(){
		cout<<"Circle \n Radius: "<<getRadius()<<"\t Diameter: "<<diameter();
		cout<<"\t Circumference: "<<circumference()<<"\t Area: "<<area();
		cout<<endl<<endl;
	}

