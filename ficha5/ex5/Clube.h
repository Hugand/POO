
#ifndef CLUBE_H
#define CLUBE_H

#include "Pessoa.h"
class Clube {
    string nome;
    int tam;
    Pessoa **tab;
    int conta;
    
public:
    Clube(string a, int b):nome(a), tam(b), conta(0){
        tab = new Pessoa*[tam];
        for(int i=0;i<tam; i++)
            tab[i] = nullptr;
    }
    
    Clube(const Clube& ref){
        nome = ref.getNome();
        tam = ref.getTam();
        conta = ref.getConta();

        tab = new Pessoa*[ref.getTam()];
        for(int i=0; i<tam; i++)
            tab[i] = (ref.getTab())[i];
    }

    ~Clube() {
        delete [] tab;
    }
    
    bool setMembro(Pessoa *p);          // Adiciona novo Sócio (se ainda existir espaço)
    bool eliminaMembro(int cc);         // Elimina Sócio, dado cc

    string getNome() const { return nome; }
    int getTam() const { return tam; }
    int getConta() const { return conta; }
    Pessoa** getTab() const { return tab; }
    
    string getAsString() const;         // Obtem descrição textual
    Clube& operator=(const Clube& c) {
        if(this == &c) { return *this; }

        nome = c.getNome();
        tam = c.getTam();
        conta = c.getConta();

        delete [] tab;

        tab = new Pessoa*[c.getTam()];
        for(int i=0; i<tam; i++)
            tab[i] = (c.getTab())[i];

        return *this;
    }
    
};

ostream& operator<<(ostream& out, const Clube& c);

#endif /* CLUBE_H */

