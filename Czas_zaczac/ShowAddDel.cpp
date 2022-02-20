#include "Functions.h"
#include <iostream>
#include <string>
#include "Rooms_class.cpp"

Pokoj rooms[10];

void show_notes()
{
	clear();

	extern std::string pokoje[10];
	for (int i = 0; i < 10; i++)
	{
		if (rooms[i].ile_notatek != 0)
		{
			
			for (int j = 1; j <= rooms[i].ile_notatek; j++)
			{
				std::cout << "\n" << pokoje[i] << ":" << std::endl;
				std::cout << "	" << rooms[i].notatka[j] << std::endl;
			}

		}

	}
	std::cin.get();
	std::cin.get();

	clear();

	main();
}

void add_notes()
{
	clear();
	pick_room();
	
	int room_select;
	std::cin >> room_select;		//Zabezpieczyæ przed nieprawid³owym inputem
	std::cin.ignore(1, '\n');

	rooms[room_select - 1].dodaj();
}

void del_notes()
{
	clear();
	pick_room();

	int room_select;
	std::cin >> room_select;		//Zabezpieczyæ przed nieprawid³owym inputem
	std::cin.ignore(0, '\n');

	rooms[room_select - 1].usun();
}