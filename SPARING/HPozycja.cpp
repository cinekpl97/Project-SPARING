#include "HPozycja.h"
#include <iostream>

using namespace std;

HP::HP(int ilosc) {
    iloscHP = ilosc;
}

HP::HP() {}

HP::~HP() {
}

int HP::PobierzIloscHP() {
    return iloscHP;
}

void HP::OdejmijHP(int ile) {
    iloscHP = iloscHP - ile;
}

void HP::DodajHP(int ile) {
    iloscHP = iloscHP + ile;
}

bool HP::JestMartwy() {
    return iloscHP <= 0;
}

void HP::UstawHP(int ile) {
    iloscHP = ile;
}


