
#include "MeniuBucatariaBunicutei.h"

void MeniuBucatariaBunicutei::DisplayMenuMessage() {
    std::cout << ADD << " - citeste si adauga o noua forma" << std::endl
        << "REMOVE x - sterge forma de pe pozitia x" << std::endl
        << TOTAL << " - afiseaza cantitatile de gem si frisca necesare pentru toate formele" << std::endl
        << STOP << " - opreste programul" << std::endl
        << std::endl
    ;
}

void MeniuBucatariaBunicutei::RunMenu() {
    DisplayMenuMessage();

    https://en.cppreference.com/w/cpp/string/basic_string
    std::string command;
    std::cin >> command;

    while(command != STOP) {
        if(command == ADD) {
            //TODO submeniu citire tip de forma
        }
            //TODO remove
        else if(command == TOTAL) {
            std::cout << "Total cantitate frisca: " << bucatarie.CantitateFriscaTotal() << std::endl;
            std::cout << "Total cantitate gem: " << bucatarie.CantitateGemTotal() << std::endl;
            std::cout << std::endl;
        }
        else {
            std::cout << "Comanda invalida" << std::endl;
        }
    }
}