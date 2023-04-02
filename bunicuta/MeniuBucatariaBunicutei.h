
#ifndef POO_LAB_144_2022_2023_SEMIGRUPA_1_MENIUBUCATARIABUNICUTEI_H
#define POO_LAB_144_2022_2023_SEMIGRUPA_1_MENIUBUCATARIABUNICUTEI_H


#include "BucatariaBunicutei.h"
#include <iostream>
#include <string>

class MeniuBucatariaBunicutei {
    BucatariaBunicutei bucatarie;

    static const std::string ADD;
    static const std::string TOTAL;
    static const std::string STOP;
    void DisplayMenuMessage();
public:
    void RunMenu();
};
const std::string MeniuBucatariaBunicutei::ADD = "ADD";
const std::string MeniuBucatariaBunicutei::TOTAL = "TOTAL";
const std::string MeniuBucatariaBunicutei::STOP = "STOP";


#endif //POO_LAB_144_2022_2023_SEMIGRUPA_1_MENIUBUCATARIABUNICUTEI_H