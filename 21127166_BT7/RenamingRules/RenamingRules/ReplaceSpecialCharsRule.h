#pragma once
#include "RenamingRules.h"
#include <vector>
#include <string>

using std::vector, std::string;

class ReplaceSpecialCharsRule : public RenamingRules {
private:
	vector<string> _specialChars;
	string _replacement;

public:
	ReplaceSpecialCharsRule();
	ReplaceSpecialCharsRule(vector<string> specialChars, string replacement);

public:
	vector<string>& specialChars() { return this->_specialChars; }
	string getRepacement() { return this->_replacement; }
	void setReplacement(string temp) { this->_replacement = temp; }

public:
	
	string rename(string);
	string toString();

};