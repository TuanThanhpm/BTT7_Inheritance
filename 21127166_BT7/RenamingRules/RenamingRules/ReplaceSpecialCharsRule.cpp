#include <iostream>
#include <sstream>
#include <unordered_map>
#include "ReplaceSpecialCharsRule.h"

using namespace std;

ReplaceSpecialCharsRule::ReplaceSpecialCharsRule() {
	this->_replacement = "";
}

ReplaceSpecialCharsRule::ReplaceSpecialCharsRule(vector<string> specialChars, string replacement) {
	this->_specialChars = specialChars;
	this->_replacement = replacement;
}

string ReplaceSpecialCharsRule::rename(string origin) {
	unordered_map<string, bool> mp;
	for (int i = 0; i < this->_specialChars.size(); i++) {
		mp[this->_specialChars[i]] = true;
	}
	stringstream builder;

	for (int i = 0; i < origin.size(); i++) {
		string s(1, origin[i]);
		if (mp[s]) {
			builder << getRepacement();
		}
		else {
			builder << origin[i];
		}
	}
	string result = builder.str();

	return result;
}

string ReplaceSpecialCharsRule::toString() {
	return "ReplaceSpecialCharsRule";
}