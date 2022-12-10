#pragma once
#include "Employee.h"

class DailyEmployee :public Employee {
private:
	int _dayCount;
	int _paymentPerDay;

public:
	DailyEmployee();
	DailyEmployee(int, int) noexcept(false);

public:
	int getDay() { return this->_dayCount; }
	int getPayment() { return this->_paymentPerDay; }
	void setDay(int dayCount) { this->_dayCount = dayCount; }
	void setPayment(int paymentPerDay) { this->_paymentPerDay = paymentPerDay; }

public:
	int salary();
	string toString();
};