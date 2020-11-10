#include <iostream>
#include <sstream>
#include <string>
#include "Banco.h"

using namespace std;

int Banco::addConta(Pessoa* p) {
    Conta newConta(p);

    for(auto conta = contas.begin(); conta < contas.end(); conta++) {
        if(conta->getTitular()->getCC() == p->getCC()) {
            return 0;
        }
    }
    contas.push_back(newConta);
    return 1;
}

int Banco::deleteConta(int cc) {
    for(auto conta = contas.begin(); conta < contas.end(); conta++) {
        if(conta->getTitular()->getCC() == cc) {
            contas.erase(conta);
            return 1;
        }
    }

    return 0;
}

void Banco::atualizaSaldo(int cc, int saldo) {
    for(auto conta = contas.begin(); conta < contas.end(); conta++) {
        if(conta->getTitular()->getCC() == cc) {
            conta->variarSaldo(saldo);
        }
    }
}

int Banco::obterSaldo(int cc) const {
    for(auto conta = contas.begin(); conta < contas.end(); conta++) {
        if(conta->getTitular()->getCC() == cc) {
            return conta->getSaldo();
        }
    }

    return -1;
}

int Banco::getTotalSaldos() const {
    int totalSaldos = 0;
    for(auto conta = contas.begin(); conta < contas.end(); conta++) {
        totalSaldos += conta->getSaldo();
    }

    return totalSaldos;
}

int Banco::transferDinheiro(int ccSrc, int ccDest, int montante) {
    Conta* contaSrc;
    Conta* contaDest;

    for(auto conta = contas.begin(); conta < contas.end(); conta++) {
        if(conta->getTitular()->getCC() == ccSrc)
            contaSrc = conta.base();

        if(conta->getTitular()->getCC() == ccDest)
            contaDest = conta.base();
    }

    if(contaSrc && contaDest && contaSrc->getSaldo() >= montante) {
        contaSrc->variarSaldo(-montante);
        contaDest->variarSaldo(montante);
    } else return 0;

    return 1;
}

string Banco::getAsString() const {
    ostringstream os;
    
    os << "Banco " << nome << " com " << contas.size() << " clientes:" << endl;
    
    for(auto it = contas.begin(); it < contas.end(); it++) {
        os << it->getAsString() << endl;
    }

    return os.str();
}