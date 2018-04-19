#include "Czlowiek.h"
#include <iostream>

using namespace std;

Czlowiek::Czlowiek() {
    id++;
    licznik++;
    sila=10;
    info="CZLOWIEK";
    UstawWartoscHP(100);
}

Czlowiek::~Czlowiek(){}

void Czlowiek::PobierzInfo() {
    cout<<"----------------------"<<endl;
    cout<<info<<" "<<endl;
    cout<<"HP: "<<hp.PobierzIloscHP()<<endl;
    cout<<"Sila: "<<sila<<endl;
    cout<<"----------------------"<<endl;
}