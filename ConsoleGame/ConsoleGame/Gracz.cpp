#include "Gracz.h"

using namespace std;

Gracz::Gracz()
{

}
Gracz::~Gracz()
{

}

Gracz::Gracz(string name, string klasa) : postacie::postacie(name)
{
	this->gold = 60;
	this->hp = 100;
	this->mana = 100;
	this->setklasa(klasa);
}

void Gracz::setgold(double gold)
{
	this->gold = gold;
}
double Gracz::getgold()
{
	return this->gold;
}

void Gracz::sethp(double hp)
{
	this->hp = hp;
}
double Gracz::gethp()
{
	return this->hp;
}

void Gracz::setmana(double mana)
{
	this->mana = mana;
}
double Gracz::getmana()
{
	return this->mana;
}

void Gracz::setIsGood(bool a)
{
	IsGood = a;
}
bool Gracz::getIsGood()
{
	return IsGood;
}

void Gracz::addItem(itemy item)
{
	ItemList.push_back(item);
}

bool Gracz::hasItem(string name) {
	for (int i = 0; i < ItemList.size(); i++)
	{
		if (ItemList[i].getname() == name)
			return true;
	}
	return false;

}

int Gracz::getItemListSize()
{
	return ItemList.size();
}
void Gracz::ShowListOfItem()
{
	for (int i = 0; i < ItemList.size(); i++)
	{
		ItemList[i].showItem();
	}
}