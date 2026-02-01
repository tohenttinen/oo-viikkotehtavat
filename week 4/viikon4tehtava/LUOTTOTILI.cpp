#include "Luottotili.h"
#include <iostream>

using namespace std;


Luottotili::Luottotili(string o, double raja) : Pankkitili(o), luottoRaja(raja)
{


}

bool Luottotili::deposit(double summa){
    if(summa <0){
        return false;
    }

    else{
        saldo +=summa;
        return true;
    }
}

bool Luottotili::withdraw(double summa){
    if(summa <0){
        return false;
    }

    else{
        saldo -=summa;
        return true;
    }
}
