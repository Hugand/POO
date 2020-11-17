#include <iostream>

#include "Movimentos.h"

void Movimentos::addMovimento(int montante) {
    v.push_back(montante);
    saldo += montante;
}

string Movimentos::getAsString() const {
    ostringstream os;

    os << "Titular: " << titular << " Saldo: " << saldo << endl;

    for(auto it = v.begin(); it < v.end(); it++){
        os << *it << " ";
    }

    return os.str();
}

Movimentos operator+(Movimentos m, const int montante){
    m.addMovimento(montante);
    return m;
}

Movimentos operator-(Movimentos m, const int montante){
    m.addMovimento(-montante);
    return m;
}

bool operator==(const Movimentos& m1, const Movimentos& m2) {
    return m1.getSaldo() == m2.getSaldo();
}

ostream& operator<<(ostream& out, const Movimentos& x){
    out << x.getAsString();
    
    return out;
}
