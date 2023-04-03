
#ifndef POO_LAB_144_2022_2023_SEMIGRUPA_1_FORMAPATRAT_H
#define POO_LAB_144_2022_2023_SEMIGRUPA_1_FORMAPATRAT_H

#include "Forma.h"

class FormaPatrat: public Forma {
    double latura;
public:
    //constructori I (param si neparam)
    FormaPatrat();
    FormaPatrat(double inaltime, double latura);
    //destructor
    ~FormaPatrat();

    //getter si setter
    double GetLatura();
    void SetLatura(double latura);

    void Afisare() {Forma::Afisare();} //TODO de ce e necesar??
    void Afisare(std::ostream&);

    friend std::istream& operator>>(std::istream& in, FormaPatrat& patrat);

    double CantitateGem();
};


#endif //POO_LAB_144_2022_2023_SEMIGRUPA_1_FORMAPATRAT_H
