#pragma once
#include "RenamingRules.h"
#include <string>

using std::string;

class AddPrefixRule :public RenamingRules {
public:
	string _prefix;

public:
	AddPrefixRule() { this->_prefix = ""; }
	AddPrefixRule(string prefix) { this->_prefix = prefix; }

public:
	string getPrefix() { return this->_prefix; }
	void setPrefix(string prefix) { this->_prefix = prefix; }

public:
	string rename(string);
	string toString();
};