#include <iostream>
#include "Functions.h"
#include <string>

class Pokoj
{
private:

public:

	int ile_notatek;
	std::string notatka[50];	//Zamieniæ na vectory nnn

	Pokoj()
	{
		ile_notatek = 0;
		notatka[0] = "";
	}
	

	void dodaj()
	{
		clear();
		
		print("	Wpisz notatke");

		ile_notatek++;
		std::getline(std::cin, notatka[ile_notatek]);
		
		clear();
		main();		
	}

	void usun()		//Poprawiæ, by nie tylko usuwa³o ostatnie
	{
		clear();
		notatka[ile_notatek] = "";
		ile_notatek--;
				
		main();
	}
};

