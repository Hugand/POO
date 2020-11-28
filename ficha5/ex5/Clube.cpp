#include <sstream>
#include <iostream>
#include <string>
#include "Clube.h"


bool Clube::setMembro(Pessoa *p) {
    if(conta < tam){
        tab[conta] = p;
        conta++;
    } else return false;

    return true;
}

bool Clube::eliminaMembro(int cc) {
    bool didDelete = false;

    for(int i = 0; i < tam; i++) {
        if(tab[i] != nullptr && tab[i]->getCC() == cc) {
            tab[i] = tab[conta-1];
            tab[conta-1] = nullptr;
            conta--;
            didDelete = true;
            break;
        }
    }

    return didDelete;
}

string Clube::getAsString() const {
    ostringstream os;

    os << "Nome Clube: " << nome << endl;

    for(int i = 0; i < tam; i++) {
        if(tab[i] != nullptr)
            os << tab[i]->getAsString() << endl;
        else break;
    }

    return os.str();
}

ostream& operator<<(ostream& out, const Clube& x) {
    out << x.getAsString();
    return out;
}