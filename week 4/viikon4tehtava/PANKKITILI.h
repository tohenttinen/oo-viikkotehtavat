#ifndef PANKKITILI_H
#define PANKKITILI_H

using namespace std;

#include <string>



class Pankkitili
{
 protected:
    string omistaja;
    double saldo;

public:
    Pankkitili(string o);
    virtual ~Pankkitili(){}
    double getBalance() const;
    virtual bool deposit(double summa);
    virtual bool withdraw(double summa);
};

#endif
