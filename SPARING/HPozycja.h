#ifndef PROJEKT_SPARING_HPOZYCJA_H
#define PROJEKT_SPARING_HPOZYCJA_H

#include <iostream>

using namespace std;

class HP {
private:
    int iloscHP;
public:
    HP();

    ~HP();

    HP(int);

    int PobierzIloscHP();

    void OdejmijHP(int);

    void DodajHP(int);

    bool JestMartwy();

    void UstawHP(int);

};


#endif //PROJEKT_SPARING_HPOZYCJA_H
