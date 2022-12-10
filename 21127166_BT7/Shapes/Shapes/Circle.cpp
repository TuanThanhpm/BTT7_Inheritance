#include "Circle.h"
#include <iostream>
#include <exception>

using namespace std;

Circle::Circle() {
	this->_radius = 1;
}

Circle::Circle(double radius) {
	if (radius < 1) {
		throw exception("Value must be a positive number.");
	}
	else {
		this->_radius = radius;
	}
}

double Circle::area() {
	double result = PI * this->_radius * this->_radius;
	return result;
}

double Circle::perimeter() {
	double result = 2 * PI * this->_radius;
	return result;
}

string Circle::toString() {
	return "Circle";
}