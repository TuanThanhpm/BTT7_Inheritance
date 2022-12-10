#pragma once
#include "Employee.h"

class ProductEmployee :public Employee {
private:
	int _productCount;
	int _paymentPerProduct;

public:
	ProductEmployee();
	ProductEmployee(int, int) noexcept(false);

public:
	int getProduct() { return this->_productCount; }
	int getPayment() { return this->_paymentPerProduct; }
	void setProduct(int productCount) { this->_productCount = productCount; }
	void setPayment(int paymentPerProduct) { this->_paymentPerProduct = paymentPerProduct; }

public:
	int salary();
	string toString();
};