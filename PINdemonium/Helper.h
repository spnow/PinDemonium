#pragma once
#include "pin.H"
#include <sstream>
class Helper
{
public:
	Helper(void);
	static BOOL existFile (string name);
	static 	vector<string> split(const string &s, char delim);
};
