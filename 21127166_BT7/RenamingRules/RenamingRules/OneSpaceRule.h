#pragma once
#include "RenamingRules.h"
#include <string>
using std::string;

class OneSpaceRule :public RenamingRules {
public:
	string rename(string);
	string toString();
};