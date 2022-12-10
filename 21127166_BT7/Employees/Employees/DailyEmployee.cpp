#include <iostream>
#include <exception>
#include "DailyEmployee.h"

using namespace std;

DailyEmployee::DailyEmployee() {
	this->_dayCount = 1;
	this->_paymentPerDay = 10000;
}

DailyEmployee::DailyEmployee(int dayCount, int paymentPerDay) {
	if (dayCount < 1 || paymentPerDay < 10000) {
		throw exception("Value must be a positive number. Payment must be larger than 10000.");
	}
	else {
		this->_dayCount = dayCount;
		this->_paymentPerDay = paymentPerDay;
	}
}

int DailyEmployee::salary() {
	int result = this->_dayCount * this->_paymentPerDay;
	return result;
}

string DailyEmployee::toString() {
	return "DailyEmployee";
}