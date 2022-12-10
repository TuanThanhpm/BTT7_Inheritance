#include <iostream>
#include <exception>
#include "Square.h"

using namespace std;

Square::Square() {
	this->_side = 1;
}

Square::Square(double side) {
	if (side < 1) {
		throw exception("Value must be a positive number.");
	}
	else {
		this->_side = side;
	}
}

double Square::area() {
	double result = this->_side * this->_side;
	return result;
}

double Square::perimeter() {
	double result = this->_side * 4;
	return result;
}

string Square::toString() {
	return "Square";
}