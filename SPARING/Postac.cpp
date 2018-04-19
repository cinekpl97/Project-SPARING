#include "Postac.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
unsigned Postac::id = 0;
unsigned Postac::licznik = 0;

Postac::~Postac() {
    cout << "DESTRUKTOR DOMYSLNY" << endl;
}

HP Postac::PobierzHP() {
    return hp;
}

void Postac::UstawWartoscHP(int ile) {
    hp.UstawHP(ile);
}

void Postac::Atak0(Postac *DrugiGracz) {
    DrugiGracz->hp.OdejmijHP(sila);
}

void Postac::Atak1(Postac *DrugiGracz) {
    int atak = rand() % 41;
    if (sila == 0) atak = 0;
    DrugiGracz->hp.OdejmijHP(atak);
}

bool Postac::Ucieczka() {
    cout << "Gracz zawolal RATUNKU! i uciekl z pola bitwy" << endl;
    return true;
}

void Postac::PobierzInfo() {
    cout << "domyslne info" << endl;
}