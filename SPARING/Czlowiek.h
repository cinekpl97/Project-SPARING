#ifndef PROJEKT_SPARING_CZLOWIEK_H
#define PROJEKT_SPARING_CZLOWIEK_H

#include <iostream>
#include "Postac.h"
#include <string.h>

using namespace std;

class Czlowiek : public Postac {
private:
    string info;
public:
    Czlowiek();

    ~Czlowiek();

    void PobierzInfo() override;
};

#endif //PROJEKT_SPARING_CZLOWIEK_H
