#include "Mapa.h"
#include <iostream>
#include <algorithm>

using namespace std;

Mapa::Mapa() {

}

Mapa::~Mapa() {}

void Mapa::operator+=(Postac *Gracz0) {
    Zawodnik0 = Gracz0;

}

void Mapa::DodajZawodnika0(Postac *Gracz) {
    Zawodnik0 = Gracz;
}

void Mapa::DodajZawodnika1(Postac *Gracz) {
    Zawodnik1 = Gracz;
}

void Mapa::WyswietlInfo() {
    Zawodnik0->PobierzInfo();
    Zawodnik1->PobierzInfo();

}

void Mapa::Walka() {
    bool Tura = true;
    bool ucieczka = false;
    while (!Zawodnik0->PobierzHP().JestMartwy() and !Zawodnik1->PobierzHP().JestMartwy() and !ucieczka) {
        int wybor = 0;

        if (Tura) {

            WyswietlInfo();
            cout << "Gracz 1: " << endl;
            cout << "1. Atak (sila)" << endl;
            cout << "2. Atak losowy (0 - 40)" << endl;
            cout << "3. Ucieczka" << endl;
            cout << "4. Nic nie rob" << endl;

            cin >> wybor;
            if (!cin) {

                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');           //stackoverflow

                cin >> wybor;
            }

            switch (wybor) {
                case 1:
                    Zawodnik0->Atak0(Zawodnik1);
                    system("cls");
                    break;
                case 2:
                    Zawodnik0->Atak1(Zawodnik1);
                    system("cls");
                    break;
                case 3:
                    ucieczka = Zawodnik0->Ucieczka();
                    if (!ucieczka) {
                        system("cls");
                        cout << "KWIATEK nie moze uciec xD" << endl;
                    }
                    break;
                case 4:
                    system("cls");
                    break;
                default:
                    system("cls");
                    break;
            }
            Tura = false;

        }
        if (!Tura and !ucieczka and !Zawodnik1->PobierzHP().JestMartwy()) {

            WyswietlInfo();
            cout << "Gracz 2: " << endl;
            cout << "1. Atak (sila)" << endl;
            cout << "2. Atak losowy (0 - 40)" << endl;
            cout << "3. Ucieczka" << endl;
            cout << "4. Nic nie rob" << endl;
            cin >> wybor;
            switch (wybor) {
                case 1:
                    Zawodnik1->Atak0(Zawodnik0);
                    system("cls");
                    break;

                case 2:
                    Zawodnik1->Atak1(Zawodnik0);
                    system("cls");
                    break;
                case 3:
                    ucieczka = Zawodnik1->Ucieczka();
                    if (!ucieczka) {
                        system("cls");
                        cout << "KWIATEK nie moze uciec xD" << endl;
                    }
                    break;
                case 4:
                    system("cls");
                    break;
                default:
                    system("cls");
                    break;
            }
            Tura = true;

        }
    }
    if (Zawodnik0->PobierzHP().JestMartwy()) cout << "GRACZ 1 przegral" << endl;
    if (Zawodnik1->PobierzHP().JestMartwy()) cout << "GRACZ 2 przegral" << endl;
}
