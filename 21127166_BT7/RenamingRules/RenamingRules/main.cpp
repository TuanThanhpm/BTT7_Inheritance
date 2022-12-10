#include <iostream>
#include <string>
#include "ReplaceSpecialCharsRule.h"
#include "OneSpaceRule.h"
#include "AddPrefixRule.h"

using namespace std;

int main() {
	string origin = "Ivan-----Glutonovik---Isenka.pdf";
	ReplaceSpecialCharsRule rule1;
	rule1.specialChars().push_back("-"); // vector<string> 
	rule1.setReplacement(" "); // string
	string newName1 = rule1.rename(origin);
	cout << newName1 << endl; // "Ivan     Glutonovik   Isenka.pdf"

	OneSpaceRule rule2;
	string newName2 = rule2.rename(newName1);
	cout << newName2 << endl; // "Ivan Glutonovik Isenka.pdf"

	AddPrefixRule rule3;
	rule3.setPrefix("CV");
	string newName3 = rule3.rename(newName2);
	cout << newName3 << endl; // "CV Ivan Glutonovik Isenka.pdf"
}