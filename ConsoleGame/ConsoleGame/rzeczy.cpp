#include "rzeczy.h"

rzeczy::rzeczy()
{

}

rzeczy::~rzeczy()
{

}
rzeczy::rzeczy(string name, double price) :itemy(name)
{
	this->price = price;
}

void rzeczy::setprice(double price)
{
	this->price = price;
}

double rzeczy::getprice()
{
	return this->price;
}