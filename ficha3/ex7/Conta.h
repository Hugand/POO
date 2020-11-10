#ifndef CONTA_H
#define CONTA_H

#include <string>
#include <initializer_list>
#include <vector>
#include "Pessoa.h"

using namespace std;


class Conta{
    int saldo;
    Pessoa* titular;

public:
    Conta(Pessoa* h): saldo(0), titular(h) {}

    int variarSaldo(int val);
    // int diminuirSaldo(int val);

    Pessoa* getTitular() const;
    int getSaldo() const;
    
    string getAsString() const;
};

#endif /* CONTA_H */
