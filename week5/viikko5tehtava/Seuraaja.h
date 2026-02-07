#ifndef SEURAAJA_H
#define SEURAAJA_H

#include <iostream>

#include <string.h>

using namespace std;

class Seuraaja{
    private:
        string nimi;

    public:
        Seuraaja* next;
        Seuraaja(string n);
        string getNimi();
        void paivitys(string p);
};


#endif // SEURAAJA_H
