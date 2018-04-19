//
// Created by user on 2018-01-16.
//

#include "Wilk.h"


#include <iostream>

using namespace std;

Wilk::Wilk() {
    id++;
    licznik++;
    sila=20;
    info="WILK";
    UstawWartoscHP(80);
}

Wilk::~Wilk(){}

void Wilk::PobierzInfo() {
    cout<<"----------------------"<<endl;
    cout<<info<<" "<<endl;
    cout<<"HP: "<<hp.PobierzIloscHP()<<endl;
    cout<<"Sila: "<<sila<<endl;
    cout<<"----------------------"<<endl;
}