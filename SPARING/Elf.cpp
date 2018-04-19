#include "Elf.h"
#include <iostream>

using namespace std;

Elf::Elf() {
    id++;
    licznik++;
    sila=15;
    info="ELF";
    UstawWartoscHP(200);
}

Elf::~Elf(){}

void Elf::PobierzInfo() {
    cout<<"----------------------"<<endl;
    cout<<info<<" "<<endl;
    cout<<"HP: "<<hp.PobierzIloscHP()<<endl;
    cout<<"Sila: "<<sila<<endl;
    cout<<"----------------------"<<endl;
}