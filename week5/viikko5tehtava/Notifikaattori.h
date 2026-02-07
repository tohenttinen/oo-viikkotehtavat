#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H

#include "Seuraaja.h"
#include <iostream>

#include <string.h>

using namespace std;

class Notifikaattori{
    protected:

        Seuraaja* seuraajat;

    public:

        Notifikaattori();
        void lisaa(Seuraaja* s);
        void poista(Seuraaja* s);
        void tulosta();
        void postita(string viesti);
};




#endif // NOTIFIKAATTORI_H
