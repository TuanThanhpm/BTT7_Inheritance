#include "AddPrefixRule.h"
#include <iostream>
#include <sstream>

using namespace std;

string AddPrefixRule::rename(string origin) {
	stringstream builder;

	builder << this->_prefix << " " << origin;
	string result = builder.str();
	return result;
}

string AddPrefixRule::toString() {
	return "AddPrefixRule";
}