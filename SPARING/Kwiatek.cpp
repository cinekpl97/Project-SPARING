//
// Created by user on 2018-01-16.
//

#include "Kwiatek.h"


#include <iostream>

using namespace std;

Kwiatek::Kwiatek() {
    id++;
    licznik++;
    sila = 0;
    info = "KWIATEK";
    UstawWartoscHP(5);
}

Kwiatek::~Kwiatek() {}

void Kwiatek::PobierzInfo() {
    cout << "----------------------" << endl;
    cout << info << " " << endl;
    cout << "HP: " << hp.PobierzIloscHP() << endl;
    cout << "Sila: " << sila << endl;
    cout << "----------------------" << endl;
}

bool Kwiatek::Ucieczka() {
    cout<<"Kwiatek nie moze uciec z pola bitwy xD"<<endl;
    return false;
}

