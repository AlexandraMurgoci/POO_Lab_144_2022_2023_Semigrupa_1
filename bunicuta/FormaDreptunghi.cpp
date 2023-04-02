
#include "FormaDreptunghi.h"
#include <iostream>

//constructori I (param si neparam)
FormaDreptunghi::FormaDreptunghi(): laturaMica(0), laturaMare(0) {}
//evidentierea transmiterii parametrilor catre constructorul din clasa de baza: Forma(inaltime)
FormaDreptunghi::FormaDreptunghi(double inaltime, double laturaMica, double laturaMare): Forma(inaltime), laturaMica(laturaMica), laturaMare(laturaMare) {}

//destructor
FormaDreptunghi::~FormaDreptunghi() {}

//getteri si setteri
double FormaDreptunghi::GetLaturaMica() { return laturaMica; }
void FormaDreptunghi::SetLaturaMica(double latura) { this->laturaMica = laturaMica; }
double FormaDreptunghi::GetLaturaMare() { return laturaMare; }
void FormaDreptunghi::SetLaturaMare(double latura) { this->laturaMare = laturaMare; }

void FormaDreptunghi::Afisare() {
    std::cout << "FormaDreptunghi: inaltime - " << inaltime << "; latura mica - " << laturaMica << "; latura mare - " << laturaMare <<  std::endl;
}