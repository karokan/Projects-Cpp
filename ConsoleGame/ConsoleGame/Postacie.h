#pragma once
#include <iostream>
#include <string>

using namespace std;

class postacie
{
public:
	postacie();
	~postacie();
	postacie(string name);



	void setklasa(string rodzaj);
	string getklasa();


	void setname(string name);
	string getname();

	


private:
	string name;
	string klasa;
};