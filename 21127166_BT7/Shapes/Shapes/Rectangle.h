#pragma once
#include "Shape.h"

class Rectangle : public Shape {
private:
	double _length;
	double _width;

public:
	Rectangle();
	Rectangle(double, double) noexcept(false);

public:
	double getLength() { return this->_length; }
	void setLength(double length) { this->_length = length; }
	double getWidth() { return this->_width; }
	void setWidth(double width) { this->_width = width; }

public:
	string toString();
	double area();
	double perimeter();
};