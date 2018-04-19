#include "Krasnolud.h"

#include <iostream>

using namespace std;

Krasnolud::Krasnolud() {
    id++;
    licznik++;
    sila=25;
    info="KRASNOLUD";
    UstawWartoscHP(150);
}

Krasnolud::~Krasnolud(){}

void Krasnolud::PobierzInfo() {
    cout<<"----------------------"<<endl;
    cout<<info<<" "<<endl;
    cout<<"HP: "<<hp.PobierzIloscHP()<<endl;
    cout<<"Sila: "<<sila<<endl;
    cout<<"----------------------"<<endl;
}