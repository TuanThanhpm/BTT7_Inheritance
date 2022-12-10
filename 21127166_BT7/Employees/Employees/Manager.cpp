#include "Manager.h"
#include <iostream>
#include <exception>

using namespace std;

Manager::Manager() {
	this->_employeeCount = 1;
	this->_paymentPerEmployee = 100000;
}

Manager::Manager(int employeeCount, int paymentPerEmployee) {
	if (employeeCount < 1 || paymentPerEmployee < 100000) {
		throw exception("Value must be a positive number. Payment must be larger than 100000.");
	}
	else {
		this->_employeeCount = employeeCount;
		this->_paymentPerEmployee = paymentPerEmployee;
	}
}

int Manager::salary() {
	int result = this->_employeeCount * this->_baseSalary + this->_paymentPerEmployee;
	return result;
}

string Manager::toString() {
	return "Manager";
}