#include<iostream>
//#include"animal.h"
#include"chat.h"
#include"chien.h"

int main()
{
    Animal animal;
    
    std::cout << animal.displayCry() << std::endl;

    Chat chat = Chat("Priscie", "goutiere", 'F');
    std::cout << chat.displayCry() << std::endl;

    Chien chien = Chien("Tom", "Doberman", 'M');
    std::cout << chien.displayCry() << std::endl;

    return 0;
}