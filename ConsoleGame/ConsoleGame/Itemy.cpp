#include "Itemy.h"

itemy::itemy()
{
}
itemy::itemy(string name)
{
	this->name = name;
}
itemy::~itemy()
{
}

void itemy::setname(string name)
{
	this->name = name;
}

string itemy::getname()
{
	return this->name;
}

void itemy::showItem()
{
	cout << this->getname() << endl;
}
