#pragma once
#include "Object.h"

using namespace std;

class Shape: public Object {
public:
	virtual double area() = 0;
	virtual double perimeter() = 0;
};