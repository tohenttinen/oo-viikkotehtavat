#include <iostream>

#include "asiakas.h"

using namespace std;


Asiakas::Asiakas(string n, double lr) : nimi(n), kayttotili(n), luottotili(n, lr) {}

std::string Asiakas::getNimi() const
{
    return nimi;
}

void Asiakas::showSaldo() const {
    cout << "Tilitiedot: " << nimi << endl;
    cout << "Kayttotili: " << kayttotili.getBalance() << " euroa" << endl;
    cout << "Luottotili: " << luottotili.getBalance() << " euroa" << endl;
}

bool Asiakas::talletus(double s) {
    return kayttotili.deposit(s);
}

bool Asiakas::nosto(double s) {
    return kayttotili.withdraw(s);
}


bool Asiakas::luotonNosto(double s) {
    return luottotili.withdraw(s);
}


bool Asiakas::luotonTalletus(double s) {
    return luottotili.deposit(s);
}



bool Asiakas::tiliSiirto(double summa, Asiakas &vastaanottaja) {
    if (summa < 0) {
        return false;

    }

    if (kayttotili.withdraw(summa)) {

        vastaanottaja.talletus(summa);
        return true;
    }


    return false;
}
