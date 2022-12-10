#include "Shape.h"
#include <iostream>

using namespace std;

string Shape::toString() {
	stringstream builder;
	builder << "Area and Perimeter: ";

	string result = builder.str();
	return result;
}