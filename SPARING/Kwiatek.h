#ifndef PROJEKT_SPARING_KWIATEK_H
#define PROJEKT_SPARING_KWIATEK_H

#include <iostream>
#include "Postac.h"
#include <string.h>

using namespace std;

class Kwiatek : public Postac {
private:
    string info;
public:
    Kwiatek();

    ~Kwiatek();

    void PobierzInfo() override;

    bool Ucieczka() override;
};
#endif //PROJEKT_SPARING_KWIATEK_H
