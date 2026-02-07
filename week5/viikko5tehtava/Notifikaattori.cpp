#include <iostream>

#include "Notifikaattori.h"

#include <string.h>

using namespace std;



Notifikaattori::Notifikaattori() : seuraajat(nullptr){
    cout << "luodaan notifikaattori" << endl;

}


void Notifikaattori::lisaa(Seuraaja* s){

    cout << "notifikaattori lisaa seuraajan " << s->getNimi() << endl;

    if(!seuraajat){

        seuraajat = s;
    }


    else{

        Seuraaja* temp = seuraajat;


        while(temp->next){

            temp = temp->next;
        }

        temp->next = s;
    }
}


void Notifikaattori::poista(Seuraaja* s){

    cout << "notifikaattori poistaa seuraajan " << s->getNimi() << endl;


    if(!seuraajat){

        return;
    }

    if(seuraajat == s){

        seuraajat = seuraajat->next;

        s->next = nullptr;

        return;
    }

    Seuraaja* temp = seuraajat;

    while(temp->next && temp->next != s){

        temp = temp->next;
    }

    if(temp->next == s){

        temp->next = s->next;

        s->next = nullptr;
    }

}



void Notifikaattori::tulosta(){

    cout << "notifikaattorin seuraajat" << endl;


    Seuraaja* temp = seuraajat;

    while(temp){

        cout << "seuraaja " << temp->getNimi() << endl;
        temp = temp->next;
    }

}



void Notifikaattori::postita(string viesti){

    cout << "Notifikaattori postaa viestin " << viesti << std::endl;

    Seuraaja* temp = seuraajat;

    while(temp){

        temp->paivitys(viesti);
        temp = temp->next;
    }
}
