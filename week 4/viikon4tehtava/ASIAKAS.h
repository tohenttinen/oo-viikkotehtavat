#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <iostream>

using namespace std;

#include <string>

#include "Luottotili.h"
#include "PANKKITILI.h"


class Asiakas
{
private:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;

public:
    Asiakas(string n, double lr);
    string getNimi() const;

    void showSaldo() const;

    bool talletus(double summa);
    bool nosto(double summa);

    bool luotonNosto(double summa);
    bool luotonTalletus(double summa);

    bool tiliSiirto(double summa, Asiakas &vastaanottaja);

};


#endif // ASIAKAS_H
