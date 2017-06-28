#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cassert>
#include "json11.hpp"

using namespace json11;
using namespace std;

void LoadJson(string& out, const char* path)
{
	ifstream ifs(path);
	assert(ifs.is_open());

	string linetmp;
	stringstream ss;
	ss.clear();
	ss.str("");
	while (std::getline(ifs, linetmp))
	{
		ss << linetmp;
	}
	std::swap(out, ss.str());
}
int main()
{
	string buf;
	LoadJson(buf, "o32.json");

	string err;
	auto json = Json::parse(buf, err);
}