#ifndef BANCO_H
#define BANCO_H

#include <string>
#include <initializer_list>
#include <vector>
#include "Pessoa.h"
#include "Conta.h"

using namespace std;


class Banco{
    string nome;
    vector<Conta> contas;

public:
    Banco(string n): nome(n) {}

    int addConta(Pessoa* p);
    int deleteConta(int cc);
    void atualizaSaldo(int cc, int saldo);

    int obterSaldo(int cc) const;
    int getTotalSaldos() const;
    int transferDinheiro(int ccSrc, int ccDest, int montante);
    
    string getAsString() const;
};

#endif /* BANCO_H */
