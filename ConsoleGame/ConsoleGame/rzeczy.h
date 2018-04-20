#pragma once
#include <iostream>
#include <string>
#include "Itemy.h"

using namespace std;

class rzeczy : public itemy
{
public:
	rzeczy();
	~rzeczy();
	rzeczy(string name, double price);
	void setprice(double price);
	double getprice();


private:
	double price;

};