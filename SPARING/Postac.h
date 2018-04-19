#ifndef PROJEKT_SPARING_POSTAC_H
#define PROJEKT_SPARING_POSTAC_H

#include <iostream>
#include "HPozycja.h"

using namespace std;

class Postac {
protected:
    unsigned static licznik, id;
    HP hp;
    int sila;
public:
    ~Postac();

    HP PobierzHP();

    void UstawWartoscHP(int);

    void Atak0(Postac *);

    virtual void Atak1(Postac *);

    virtual bool Ucieczka();

    virtual void PobierzInfo();
};

#endif //PROJEKT_SPARING_POSTAC_H
