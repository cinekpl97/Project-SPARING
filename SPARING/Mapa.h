#ifndef PROJEKT_SPARING_MAPA_H
#define PROJEKT_SPARING_MAPA_H

#include <iostream>
#include "HPozycja.h"
#include "Postac.h"

using namespace std;

class Mapa {
private:
    Postac *Zawodnik0;
    Postac *Zawodnik1;
public:

    Mapa();

    ~Mapa();

    void operator+=(Postac *Gracz0);

    void DodajZawodnika0(Postac *);

    void DodajZawodnika1(Postac *);

    void WyswietlInfo();


    void Walka();
};

#endif //PROJEKT_SPARING_MAPA_H
