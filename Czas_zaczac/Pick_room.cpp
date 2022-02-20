#include "Functions.h"
#include <string>
#include <iostream>


std::string pokoje[10] = { "lobby", "biuro1", "biuro2", "serwerownia1", "serwerownia2", "kuchnia", "lazienka", "sala_konferencyjna", "magazyn", "kanciapa" };

void pick_room()
{
    
    print("\n  Wybierz pokoj\n");
    
    for (int i = 0; i < 10; i++)
    {
        std::cout << i + 1 << ". " << pokoje[i]<<std::endl;
    }
    std::cout << std::endl;
}