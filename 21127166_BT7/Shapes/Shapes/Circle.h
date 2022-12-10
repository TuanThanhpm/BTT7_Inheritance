#pragma once
#include "Shape.h"

#define PI 3.14

class Circle :public Shape {
private:
	double _radius;
public:
	Circle();
	Circle(double) noexcept(false);

public:
	double getRadius() { return this->_radius; }
	void setRadius(double radius) { this->_radius = radius; }

public:
	string toString();
	double area();
	double perimeter();
};