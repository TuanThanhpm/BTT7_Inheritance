#include "OneSpaceRule.h"
#include <iostream>
#include <sstream>

using namespace std;

string OneSpaceRule::rename(string origin) {
	bool spaceAdded = false;
	stringstream builder;
	for (int i = 0; i < origin.size(); i++) {
		char ch = origin[i];
		if (ch == ' ') {
			if (!spaceAdded) {
				builder << ' ';
				spaceAdded = true;
			}
		}
		else {
			builder << ch;
			spaceAdded = false;
		}
	}
	string result = builder.str();

	if (result[0] == ' ')
		result.erase(result.begin());
	if (result[result.size() - 1] == ' ')
		result.erase(result.end() - 1);

	return result;
}

string OneSpaceRule::toString() {
	return "OneSpaceRule";
}