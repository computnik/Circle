/*
 * The header file: Circle.h
 */

#ifndef CIRCLE_H
#define CIRCLE_H
//put just the descriptive part of the class in here
class Circle {
//	Public Members
public:
//	default constructor
	void Circle();

//	copy constructor
	void Circle(Circle c);

//	Parametric constructor
	void Circle(int r);

//	accessor functions
	int getRadius();

//	mutator functions
	void setRadius(int r);

//	Point Circle?
	bool isPoint();

//	Functions

//	Area
	float area();

//	Diameter
	int diameter();

//	Circumference
	float circumference();

//	Length of Arc Subtended
	float lengthArc(int degree);

//	Print Circle
	void printCircle();

//	Private Members
private:
	int radius;
};
#endif
