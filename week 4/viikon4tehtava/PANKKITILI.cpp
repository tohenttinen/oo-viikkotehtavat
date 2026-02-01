#include <iostream>
#include "pankkitili.h"

using namespace std;

Pankkitili::Pankkitili(string o) : omistaja(o), saldo(0)
{

}

double Pankkitili::getBalance() const
{
    return saldo;
}

bool Pankkitili::deposit(double summa)
{
    if(summa<0){
        return false;
    }

    else{
        saldo += summa;
         return true;
    }
}

bool Pankkitili::withdraw(double summa)
{
    if(summa<0){
        return false;
    }

    else{
        saldo -= summa;
        return true;
    }
}
