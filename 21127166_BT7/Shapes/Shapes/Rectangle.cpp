#include "Rectangle.h"
#include <iostream>
#include <exception>

using namespace std;

Rectangle::Rectangle() {
	this->_length = 2;
	this->_width = 1;
}

Rectangle::Rectangle(double length, double width) {
	if (length < 1 || width < 1) {
		throw exception("Value must be a positive number");
	}
	else {
		this->_length = length;
		this->_width = width;
	}
}

double Rectangle::area() {
	double result = this->_length * this->_width;
	return result;
}

double Rectangle::perimeter() {
	double result = (this->_length + this->_width) * 2;
	return result;
}

string Rectangle::toString() {
	return "Rectangle";
}
