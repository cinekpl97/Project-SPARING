#ifndef PROJEKT_SPARING_KRASNOLUD_H
#define PROJEKT_SPARING_KRASNOLUD_H
#include <iostream>
#include "Postac.h"
#include <string.h>

using namespace std;

class Krasnolud : public Postac {
private:
    string info;
public:
    Krasnolud();

    ~Krasnolud();

    void PobierzInfo() override;
};
#endif //PROJEKT_SPARING_KRASNOLUD_H
