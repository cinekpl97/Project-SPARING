#include <iostream>
#include <limits>
#include "Postac.h"
#include "HPozycja.h"
#include "Mapa.h"
#include "Czlowiek.h"
#include "Elf.h"
#include "Plik.h"
#include "Krasnolud.h"
#include "Wilk.h"
#include "Kwiatek.h"

using namespace std;

Postac *WybierzPostac() {
    int x = 0;
    while (x < 1 or x > 4) {

        cout << endl;
        cout << "1. Czlowiek" << endl;
        cout << "2. Elf" << endl;
        cout << "3. Krasnolud" << endl;
        cout << "4. Wilk" << endl;
        cout << "5. Kwiatek" << endl;

        cout << " Wybierz: " << endl;

        cin >> x;
        if (!cin) {

            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');           //stackoverflow

            cin >> x;
        }
        switch (x) {
            case 1:
                return new Czlowiek;
            case 2:
                return new Elf;
            case 3:
                return new Krasnolud;
            case 4:
                return new Wilk;
            case 5:
                return new Kwiatek;
            default:
                break;
        }
        cout << endl << endl;
    }
}


int main() {
    Mapa Swiat;
    cout << endl;
    cout << "Witaj! Czas na pojedynek!" << endl;
    cout << endl;
    cout << "Opisy Postaci: " << endl;
    cout << endl << endl;
    Plik::OdczytajZPliku("Opisy.txt");
    cout << endl;
    cout << "GRACZ 1: Wybierz postac" << endl;
    Postac *Gracz0 = WybierzPostac();
    Swiat += Gracz0;
    system("cls");
    cout << "Opisy Postaci: " << endl;
    Plik::OdczytajZPliku("Opisy.txt");
    cout << "GRACZ 2: Wybierz postac" << endl;
    Postac *Gracz1 = WybierzPostac();
    Swiat.DodajZawodnika1(Gracz1);
    system("cls");
    cout << endl;

    Swiat.Walka();
    system("PAUSE");
    return 0;
}