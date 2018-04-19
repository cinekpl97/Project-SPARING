#include "Plik.h"
#include <iostream>
#include <fstream>

using namespace std;

void Plik::OdczytajZPliku(string path) {


    fstream file(path, ios::in);

    if (file.good()) {
        string data;

        while (!file.eof() && !file.fail()) {
            getline(file, data);
            cout << data << endl;
            cout << endl;
        }

    }
}
