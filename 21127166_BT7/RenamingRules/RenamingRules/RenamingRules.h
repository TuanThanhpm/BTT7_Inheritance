#pragma once
#include "Object.h"

class RenamingRules: public Object {
public:
	virtual string rename(string) = 0;
};