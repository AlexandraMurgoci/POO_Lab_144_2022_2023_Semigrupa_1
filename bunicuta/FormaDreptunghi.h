
#ifndef POO_LAB_144_2022_2023_SEMIGRUPA_1_FORMADREPTUNGHI_H
#define POO_LAB_144_2022_2023_SEMIGRUPA_1_FORMADREPTUNGHI_H

#include "Forma.h"

class FormaDreptunghi: public Forma {
    double laturaMica;
    double laturaMare;

    //constructori I (param si neparam)
    FormaDreptunghi();
    FormaDreptunghi(double inaltime, double laturaMica, double laturaMare);
    //destructor
    ~FormaDreptunghi();

    //getteri si setteri
    double GetLaturaMica();
    void SetLaturaMica(double laturaMica);
    double GetLaturaMare();
    void SetLaturaMare(double laturaMare);

    void Afisare();
};


#endif //POO_LAB_144_2022_2023_SEMIGRUPA_1_FORMADREPTUNGHI_H
