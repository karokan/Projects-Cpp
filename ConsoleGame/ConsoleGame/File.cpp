#include "File.h"
#include <string>



bool File::saveToFile(string path, string name, string klasa, int ilosc,bool IsGood, vector <itemy> ItemList)
{
	fstream file;
	file.open(path, ios::out);

	if (file.good())
	{
		file << name << endl;
		file << klasa << endl;
		file << IsGood << endl;

		for (int i = 0; i < ItemList.size(); i++)
		{
			file << ItemList[i].getname() << endl;
		}
		file.close();
		return true;
	}

	return false;
}

vector<string> File::readFromFile(string path)
{
	fstream file;
	file.open(path, ios::in);
	vector <string> List;
	if (file.good())
	{
		while (!file.eof())
		{
			string tmp;
			getline(file, tmp);
			List.push_back(tmp);
		}
	}
	file.close();
	return List;
}