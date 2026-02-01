#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "PANKKITILI.h"

using namespace std;

class Luottotili : public Pankkitili
{
protected:
    double luottoRaja;

public:
    Luottotili(string o, double raja);
    bool deposit(double summa) override;
    bool withdraw(double summa) override;

};



#endif // LUOTTOTILI_H
