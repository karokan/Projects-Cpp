#include "Postacie.h"

using namespace std;

postacie::postacie()
{
}

postacie::~postacie()
{
}

postacie::postacie(string name)
{
	this->name = name;
}

void postacie::setname(string name)
{
	this->name = name;
}

string postacie::getname()
{
	return this->name;
}

void postacie::setklasa(string klasa)
{
	this->klasa = klasa;
}
string postacie::getklasa()
{
	return this->klasa;
}
