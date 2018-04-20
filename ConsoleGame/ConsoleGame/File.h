#pragma once
#include <fstream>
#include <vector>
#include "rzeczy.h"
#include "Gracz.h"


class File
{
public:
	static bool saveToFile(string, string, string, int,bool , vector <itemy>);
	static vector<string> readFromFile(string path);
};