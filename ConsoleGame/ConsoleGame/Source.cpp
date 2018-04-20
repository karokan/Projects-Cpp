#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
#include "Postacie.h"
#include "rzeczy.h"
#include "Gracz.h"
#include "File.h"



using namespace std;
bool IsNameCorrect(string name);
//bool IsKlasaCorrect(string klasa);

int main()
{
	string co;
	bool IsGood = true;
	Gracz gracz;
	while (IsGood)
	{
		string tmp1;
		string tmp2;
		cout << "Podaj nick gracza: " << endl;
		cin >> tmp1;

		if (!IsNameCorrect(tmp1))
		{
			continue;
		}

		cout << "Podaj rodzaj klasy:  " << endl;
		Sleep(1000);
		cout << "Masz 3 do wyboru: " << endl;
		Sleep(1000);
		cout << "1)Mage\n2)Warrior\n3)Rogue" << endl;
		int n;
		cin >> n;
		switch (n)
		{
		case 1:
			IsGood = false;
			tmp2 = "Mage";
			HANDLE kolor1;
			kolor1 = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(kolor1, 1);

			cout << "Magia przed Toba nie ma tajemnic" << endl;
			Sleep(1500);
			cout << "Duze obrazenia to Twoja specjalnosc" << endl;
			Sleep(1200);
			cout << "obdarzony ponadprzecietnym intelektem oraz niezachwiana dyscyplina" << endl;
			if (IsNameCorrect(tmp1))
			{
				gracz = Gracz(tmp1, tmp2);
				break;
			}
			break;
		case 2:
			IsGood = false;
			tmp2 = "Warrior";
			cout << "Twardzi jak stal i osiagaja mistrzostwo w poslugiwaniu sie bronia oraz zmysle taktycznym" << endl;
			Sleep(1500);
			cout << "nigdy nie unikasz walki" << endl;
			Sleep(1500);
			cout << "Honor jest najwazniejszy" << endl;
			if (IsNameCorrect(tmp1))
			{
				gracz = Gracz(tmp1, tmp2);
				break;
			}
			break;
		case 3:
			IsGood = false;
			tmp2 = "Rogue";
			HANDLE kolor;
			kolor = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(kolor, 6);

			cout << "Pojawiasz sie i znikasz" << endl;
			Sleep(1500);
			//system("color b8");
			cout << "Twoim jedynym kodeksem jest kontrakt, a ich honor, jest kupowany za zloto" << endl;
			Sleep(1500);
			cout << "Cien to jego drugie imie" << endl;
			Sleep(1600);
			cout << " podchodza do swych celow od tylu, przeszywaja witalny organ" << endl;
			Sleep(1500);
			cout << "i rozplywaja sie w cieniu..." << endl;
			Sleep(1800);
			cout << "zanim ich ofiara upadnie na ziemie" << endl;

			if (IsNameCorrect(tmp1))
			{
				gracz = Gracz(tmp1, tmp2);
				break;
				IsGood = false;
			}
			IsGood = false;
			break;

		}
		gracz.setIsGood(false);
	}
		


		cout << endl << endl;
		cout << gracz.getname() << endl;
		cout << gracz.getname() << endl;
		cout << "Ktos krzyczy Twoje imie" << endl;
		Sleep(1200);
		cout << "Budzisz sie oszolomiony" << endl;
		cout << " Nie wiesz co sie stalo" << endl;
		cout << " Rozgladasz sie dookola i widzisz same trupy" << endl;
		Sleep(1500);
		cout << " Przypominasz sobie, ze razem z przyjaciolmi atakowaliscie Ilidiana" << endl;
		Sleep(1500);
		cout << "to miala byc tylko formalnosc" << endl;
		Sleep(2000);
		cout << "Jednak cos poszlo nie tak..." << endl;
		Sleep(4000); 
		cout << gracz.getname() << "!!!!" << endl;
		Sleep(500);
		cout << "Krzyk slychac coraz glosniej gdy nagle..." << endl;
		Sleep(1700);
		cout << " W oddali widzisz biegnacego w Twoja strone, ledwo zyjacego Warlocka" << endl;
		Sleep(2000);
		cout << "Niestety Warlock umiera w meczarniach..." << endl;
		Sleep(2000);
		cout << "a Ty musisz szybko uciekac..." << endl;
		cout << "W oddali widzisz ledwo sie tlacy portal magiczny do Dalaran" << endl;
		Sleep(1000);
		cout << "w ostatnim momencie do niego wchodzisz i teleportujesz sie do miasta" << endl;
		Sleep(2000);
		cout << "TWOIM ZADANIEM JEST ZNALEZIENIE SPOSOBU NA WSKRZESZENIE WSZYSTKICH UCZESTNIKOW RAIDU A CO ZA TYM IDZIE ZABICIE BOSSA Z INNYMI LUDZMI" << endl;
		cout << "pamietaj jednak, ze nie masz takiej umiejetnosci, posiadaja ja tylko Druidzi i Prieœci" << endl;
		cout << "Masz do tego 10 ruchow, jesli Ci sie nie uda..." << endl;
		Sleep(4000);
		cout << "Juz nigdy nie zobaczysz przyjaciol z Gildi" << endl;
		cout << " ********* ZACZYNAMY ***********" << endl;
		int ilosc = 0;
		while (ilosc < 10)
		{
			cout << "Stoisz w Dalaran" << endl;
			cout << "Co zamierzasz teraz zrobic" << endl;
			cout << "1) Isc cos kupic do Wendora" << endl;
			cout << "2) Zapytaæ kogoœ o pomoc" << endl;
			cout << "3) Isc robic questy i sie nie przejmowac" << endl;
			cout << "4) Zapisz gre" << endl;
			cout << "5) Wczytaj zapisana" << endl;
			cout << "Wpisz co chcialbys zrobic" << endl;

			cin >> co;
			if (co == "1")
			{
				cout << " U wendora mozesz kupic (mo¿e Ci siê coœ przydaæ)" << endl;
				cout << "1) Picie na mane - 5 golda" << endl;
				cout << "2) Jedzenie na hp - 7 golda" << endl;
				cout << "3) Potki - 10 golda" << endl;
				cin >> co;

				if (co == "1")
				{
					if (gracz.getgold() >= 5)
					{
						rzeczy water("picie", 5);
						gracz.setgold(gracz.getgold() - 5);
						gracz.addItem(water);
					}
					else
					{
						cout << "nie masz pieniedzy" << endl;
					}
					ilosc++;
				}
				else if (co == "2")
				{
					if (gracz.getgold() >= 7)
					{
						rzeczy cake("ciastko", 7);
						gracz.setgold(gracz.getgold() - 7);
						gracz.addItem(cake);
					}
					else
					{
						cout << "nie masz pieniedzy" << endl;
					}
					ilosc++;

				}
				else if (co == "3")
				{
					if (gracz.getgold() >= 10)
					{
						rzeczy potki("flaszki", 10);
						gracz.setgold(gracz.getgold() - 10);
						gracz.addItem(potki);
					}
					else
					{
						cout << "nie masz pieniedzy" << endl;
					}
					ilosc++;
				}
				else
				{
					cout << "Bledy numer" << endl;
				}
				
			}
			else if (co == "2")
			{
				cout << "Obok Ciebie przechodza" << endl;
				cout << "1) Death Knight" << endl;
				cout << "2) Priest" << endl;
				cout << "3) Druid" << endl;
				cout << "Kogo Zapytasz?" << endl;
				cin >> co;
				if (co == "1")
				{
					cout << "Niestety Ci nie pomoge, spiesze sie na arene ale moglbym zapytac kumpla Paladyna" << endl;
					ilosc++;
					cout << "zapytac?" << endl;
					cin >> co;
					if (co == "t")
					{
						cout << "Znajomy Palladyn mowi, ze jest wlasnie na Battleground, skonczy za pol godziny, wtedy moglby pomoc" << endl;
						cout << "Jesli sie zgodzisz stracisz 3 ruchy, ale moze Palladyn uratuje Twoich przyjaciol" << endl;
						cout << "zgadasz sie? " << endl;
						cin >> co;
							if (co == "t")
							{
								cout << "Palladyn zalatwil ekipe do pomocy" << endl;
								cout << "Gildia Palladyna pomaga uratowac przyjacil" << endl;
								cout << "WYGRALES, GRATUALCJE!!!" << endl;
								ilosc++;
								ilosc++;
							}

					}
					else
					{
						cout << "w porzadku bywaj" << endl;
					}
				}
				else if (co == "2")
				{
					ilosc++;
					cout << "Niestety nie mam many, gdybys mial picie to moglbym Ci pomoc, potrzebuje 1 flaszke" << endl;
					cout << "Zobacz co masz w plecaku" << endl;

					if (gracz.getItemListSize() == 0)
					{
						cout << "Plecak jest pusty!\n\n";
					}
					else
					{
						cout << "W plecaku masz:\n\n";
						gracz.ShowListOfItem();
					}
					cout << "czy masz picie?" << endl;
					cin >> co;
					if (co == "t")
					{
						cout << "Priestowi zaczynaja wzrastac sily" << endl;
						cout << "troche to trwa... (tracisz 1 ruch)" << endl;
						ilosc++;
						cout << "Pyta znajomych w Gildii kto moglby pomoc" << endl;
						cout << "wiekszosc ludzi jest zajeta jednak..." << endl;
						Sleep(5000);
						cout << " Guildmaster mowi ze za 40 golda pomoga" << endl;
						
						cout << "sprawdzasz ile masz pieniedzy i placisz?" << endl;
						cout << "czy odpuszczasz?" << endl;
						cin >> co;
						if (co == "p")
						{
							if (gracz.getgold() >= 40)
							{
								cout << "GUILDMASTER: pomozemy Ci" << endl;
								cout << "Boss zostaje zabity " << endl;
								cout << "WYGRYWASZ" << endl;
								break;
							}
						}
						else
						{
							cout << "Bywaj podrozniku" << endl;
						}
					}
					else
					{
						cout << "Czy wracasz kupiæ picie?" << endl;
						cin >> co;
						if (co == "t")
						{
						}
						else
						{
							cout << "Bywaj" << endl;
						}
						ilosc++;
					}
				}
				else if (co == "3")
				{
					cout << " Chetnie Ci pomoge, akurat wracamy z kolegami z Raidu NAXXRAMAS" << endl;
					cout << "czy pojdziesz z Druidem mimo tego ¿e ma mniejszy lvl od Ciebie ale moze miec lepszych kolegow? (tracisz 3 ruchy)" << endl;
						cin >> co;
					if (co == "t")
					{
						cout << "Okazalo sie niestety ze druid, nie mial wystarczajaco duzo mocy aby ozywic Twoich towarzyszy a koledzy byli na arenie" << endl;
						ilosc++;
						ilosc++;
						ilosc++;
					}
					ilosc++;
				}
				else
				{
					cout << "bledny numer" << endl;
				}
				
			}
			else if (co == "4")
			{
				string path;
				cout << "zapisz plik jako: ";
				cin >> path;
				File::saveToFile(path, gracz.getname(), gracz.getklasa(), ilosc, gracz.getIsGood(), gracz.ItemList);
				return 0;

			}
			else if (co == "5")
			{
				string path;
				cout << "podaj nazwê pliku z zapisem : ";
				cin >> path;
				vector<string> FromFile;
				ifstream file(path);
				if (file)
				{
					cout << "otworzono plik!" << endl;
					FromFile = File::readFromFile(path);
					for (int i = 0; i < FromFile.size(); i++)
					{
						cout << FromFile[i] << endl;
					}
				}
				else
					cout << "b³¹d przy otwieraniu pliku!";
				for (int i = 0; i < gracz.ItemList.size(); i++)
				{
					gracz.ItemList.pop_back();
				}
				gracz.setname(FromFile[0]);
				gracz.setklasa(FromFile[1]);
				ilosc = stoi(FromFile[2]);
	
				gracz.setIsGood(stoi(FromFile[3]));

				for (int i = 4; i < FromFile.size(); i++)
				{
					gracz.ItemList.push_back(FromFile[i]);
				}
			}
			else if (co == "3")
			{
				cout << "GRATULUJE PRZEGRALES GRE" << endl;
				break;
			}
			else
			{
				cout << "bledna liczba" << endl;
			}
			
		
		}



	

	system("pause");
}



bool IsNameCorrect(string name)
{
	if (name == "")
	{
		cout << "Nic nie wpisa³eœ" << endl;
		return false;
	}
	for (int i = 0; i < name.size(); i++)
	{

		if ((name[i] < 'A' || name[i] > 'Z') && (name[i]<'a' || name[i]>'z'))
		{
			cout << "B³ednie wpisany nick" << endl;
			return false;
		}
		else
		{
			continue;
		}
	}

	return true;
}

/*bool IsKlasaCorrect(string klasa)
{
	if (klasa == "")
	{
		cout << "nie wpisano nic!" << endl;
		return false;
	}
	for (int i = 0; i < klasa.size(); i++)
	{

		if ((klasa[i] < 'A' || klasa[i] > 'Z') && (klasa[i]<'a' || klasa[i]>'z'))
		{
			cout << "wpisano znak nie bêd¹cy liter¹ do imienia!" << endl;
			return false;
		}
		else
		{
			continue;
		}
	}

	return true;
}*/