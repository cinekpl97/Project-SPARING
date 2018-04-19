#ifndef PROJEKT_SPARING_ELF_H

#define PROJEKT_SPARING_ELF_H

#include <iostream>
#include "Postac.h"
#include <string.h>

using namespace std;

class Elf : public Postac {
private:
    string info;
public:
    Elf();

    ~Elf();

    void PobierzInfo() override;
};

#endif //PROJEKT_SPARING_ELF_H
