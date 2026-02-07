#include <iostream>

#include "Seuraaja.h"

#include <string.h>


using namespace std;


Seuraaja::Seuraaja(string n) : nimi(n), next(nullptr){
    cout << "luodaan seuraaja " << nimi << endl;
}



string Seuraaja::getNimi(){

    return nimi;

}


void Seuraaja::paivitys(string viesti){

    cout << "seuraaja " << nimi << " sai viestin" << viesti << endl;

}
