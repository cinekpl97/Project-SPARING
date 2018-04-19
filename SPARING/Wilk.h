//
// Created by user on 2018-01-16.
//

#ifndef PROJEKT_SPARING_WILK_H
#define PROJEKT_SPARING_WILK_H
#include <iostream>
#include "Postac.h"
#include <string.h>

using namespace std;

class Wilk : public Postac {
private:
    string info;
public:
    Wilk();

    ~Wilk();

    void PobierzInfo() override;
};
#endif //PROJEKT_SPARING_WILK_H
