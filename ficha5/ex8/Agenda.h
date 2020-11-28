#ifndef AGENDA_H
#define AGENDA_H

#include <vector>
#include <iostream>
#include <sstream>
#include "Contacto.h"

class Agenda{
    vector<Contacto*> v;
public:

    Agenda() = default;
    
    Agenda(const Agenda& ref) {
        for(int i = 0; i < ref.v.size(); i++)
            addContacto(ref.v[i]->getNome(), ref.v[i]->getTel());
    }

    ~Agenda() {
        for(auto it = v.begin(); it < v.end(); it++)
            delete *it;
    }

    Agenda& operator=(const Agenda& c) {
        if(this == &c) { return *this; }

        for(auto it = v.begin(); it < v.end(); it++)
            delete *it;

        v.clear();

        for(int i = 0; i < c.v.size(); i++)
            addContacto(c.v[i]->getNome(), c.v[i]->getTel());

        return *this;
    }
    
    // Alterar para impedir a adicao de contactos com nomes repetidos
    // Organizar a agenda por ordem alfabetica
    bool addContacto(string nome, int tel);
    int getTel(string a) const;     // Devolve telefone do Contacto a (-1 se não existir)
    
    bool atualizaContacto(string a, int nt);    // atualiza numero do contacto a
    
    bool eliminaContacto(int t);        // Elimina contacto com este numero
    
    string getAsString() const;
};

ostream& operator<<(ostream& out, const Agenda& ref);

#endif /* AGENDA_H */

