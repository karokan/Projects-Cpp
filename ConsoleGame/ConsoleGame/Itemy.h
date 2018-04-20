#pragma once
#include <iostream>
#include <string>

using namespace std;

class itemy
{
public:
	itemy();
	itemy(string name);
	~itemy();
	void setname(string name);
	string getname();
	void showItem();

private:
	string name;
};