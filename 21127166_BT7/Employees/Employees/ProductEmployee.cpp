#include <iostream>
#include <exception>
#include "ProductEmployee.h"

using namespace std;

ProductEmployee::ProductEmployee() {
	this->_productCount = 1;
	this->_paymentPerProduct = 1000;
}

ProductEmployee::ProductEmployee(int productCount, int paymentPerProduct) {
	if (productCount < 1 || paymentPerProduct < 1000) {
		throw exception("Value must be a positive number. Payment must be larger than 1000.");
	}
	else {
		this->_productCount = productCount;
		this->_paymentPerProduct = paymentPerProduct;
	}
}

int ProductEmployee::salary() {
	int result = this->_productCount * this->_paymentPerProduct;
	return result;
}

string ProductEmployee::toString() {
	return "ProductEmployee";
}