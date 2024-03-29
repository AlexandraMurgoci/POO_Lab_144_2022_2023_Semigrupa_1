
#ifndef POO_LAB_144_2022_2023_SEMIGRUPA_1_FORMA_H
#define POO_LAB_144_2022_2023_SEMIGRUPA_1_FORMA_H

#include <iostream>

class Forma {
protected:
    double inaltime;
private:
    double Volum();
    virtual double ArieBaza() = 0;
public:
    //constructori I (param si neparam)
    Forma();
    Forma(double inaltime);
    //destructor
    virtual ~Forma();

    //getter si setter
    double GetInaltime();
    void SetInaltime(double inaltime);

    virtual void Afisare();
    virtual void Afisare(std::ostream&);
    virtual double CantitateFrisca();
    double CantitateGem();

    friend std::istream& operator>>(std::istream& in, Forma& forma);
};

std::ostream& operator<<(std::ostream& out, Forma& forma);

#endif //POO_LAB_144_2022_2023_SEMIGRUPA_1_FORMA_H
