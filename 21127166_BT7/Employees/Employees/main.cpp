
#include <iostream>
#include <vector>
#include "DailyEmployee.h"
#include "ProductEmployee.h"
#include "Manager.h"

using namespace std;

int main() {
	vector<DailyEmployee*> dailyEmployees;
	try {
		dailyEmployees = {
			new DailyEmployee(20, 1000000), // number of days, payment per day
			new DailyEmployee(22, 1100000),
			new DailyEmployee(18, 1500000)
		};
	}
	catch (exception e) {
		cout << e.what() << endl;
	}

	// Daily employee's salary = number of days * payment per day
	for (DailyEmployee* employee : dailyEmployees) {
		cout << "Daily employee, salary:" << employee->salary() << endl;
	}

	vector<ProductEmployee*> productEmployees;
	try {
		productEmployees = {
			  new ProductEmployee(790, 20000), // number of products, payment per product
			  new ProductEmployee(810, 19000),
			  new ProductEmployee(900, 18000)
		};
	}
	catch (exception e) {
		cout << e.what() << endl;
	}

	// Product employee's salary = number of products * payment per product
	for (ProductEmployee* employee : productEmployees) {
		cout << "Product employee, salary:" << employee->salary() << endl;
	}

	vector<Manager*> managers;
	try {
		managers = {
			new Manager(30, 5000000), // number of managed employees, fixed base payment per month
			new Manager(49, 6000000),
			new Manager(37, 7000000)
		};
	}
	catch (exception e) {
		cout << e.what() << endl;
	}

	// Manager's salary = number of managed employees * 500.000 + fixed base payment per month
	for (Manager* employee : managers) {
		cout << "Manager, salary:" << employee->salary() << endl;
	}
}

