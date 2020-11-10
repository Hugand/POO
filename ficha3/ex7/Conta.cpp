#include <sstream>
#include <string>
#include "Conta.h"

using namespace std;

string Conta::getAsString() const {
    ostringstream os;
    
    os << "Titular: " << titular->getAsString() << endl
    << "Saldo: " << saldo;

    return os.str();
}

int Conta::variarSaldo(int val = 1) {
    if(saldo + val >= 0) {
        saldo += val;
        return 1;
    } else return 0;
    return 1;
}

int Conta::getSaldo() const { return saldo; }

Pessoa* Conta::getTitular() const {
    return titular;
}