#include <iostream>
#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas a1("Juhani", 2000);
    Asiakas a2("Teppo", 1000);

    a1.talletus(500);
    cout << "Juhani tallettaa 500 e" << endl;
    a1.showSaldo();

    double siirto = 250.0;
    cout << "Juhani lahettaa Tepolle " << siirto << " e" << endl;

    if(a1.tiliSiirto(siirto, a2)){
        cout << "siirto onnistui" << endl;
    }

    else{
        cout << "siirto epaonnistui" << endl;
    }

    a1.showSaldo();
    a2.showSaldo();

    return 0;
}
