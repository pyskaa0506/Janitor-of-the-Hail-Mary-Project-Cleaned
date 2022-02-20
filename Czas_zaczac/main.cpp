#include <iostream>
#include <cstdlib>
#include "Functions.h"


void choice()
{
    char choice1;
    std::cin >> choice1;
    
#if 1
    switch (choice1) 
    {
        case '1':  show_notes(); break;
        case '2':  add_notes(); break;
        case '3':  del_notes(); break;
        case '4': clear(); exit(0); break;
        default: 
            clear();
            main();

    }
#endif
}

int main()
{
    
    print("\n  Co chcesz zrobic\n");
    print("  1. Wyswietl notatki");
    print("  2. Dodaj notatke");
    print("  3. Usun ostatnia notatke");
    print("  4. Zamknij program");
    
    choice();
            
}