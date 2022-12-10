#pragma once
#include "Shape.h"

class Square : public Shape {
private:
	double _side;
public:
	Square();
	Square(double) noexcept(false);

public:
	double getSide() { return this->_side; }
	void setSide(double side) { this->_side = side; }

public:
	string toString();
	double area();
	double perimeter();
};