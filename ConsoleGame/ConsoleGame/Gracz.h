#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Postacie.h"
#include "Itemy.h"

using namespace std;

class Gracz : public postacie
{
public:
	Gracz();
	~Gracz();

	Gracz(string name, string klasa);

	void setgold(double gold);
	double getgold();

	void sethp(double hp);
	double gethp();

	void setmana(double mana);
	double getmana();

	void setIsGood(bool);
	bool getIsGood();

	bool hasItem(string name);
	void addItem(itemy itemy);
	vector<itemy> ItemList;

	void ShowListOfItem();
	int getItemListSize();



private:
	bool IsGood;
	string bron;
	double gold;
	double hp; 
	double mana; 

};