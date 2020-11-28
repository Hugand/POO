#include <sstream>
#include <string>
#include "Agenda.h"

bool Agenda::addContacto(string nome, int tel) {
    for(auto it = v.begin(); it < v.end(); it++)
        if(nome == (*it)->getNome())
            return false;

    v.push_back(new Contacto(nome, tel));
    return true;
}

int Agenda::getTel(string a) const {
    for(auto it = v.begin(); it < v.end(); it++)
        if(a == (*it)->getNome())
            return (*it)->getTel();

    return -1;
}

bool Agenda::atualizaContacto(string a, int nt) {
    for(auto it = v.begin(); it < v.end(); it++)
        if(a == (*it)->getNome()) {
            (*it)->setTel(nt);
            return true;
        }

    return false;
}

bool Agenda::eliminaContacto(int t) {
    for(auto it = v.begin(); it < v.end(); it++)
        if(t == (*it)->getTel()) {
            delete (*it);
            it = v.erase(it);
            return true;
        }
    
    return false;
}

string Agenda::getAsString() const {
    ostringstream os;

    for(auto it = v.begin(); it < v.end(); it++)
        os << (*it)->getAsString() << endl;

    return os.str();
}

ostream& operator<<(ostream& out, const Agenda& ref) {
    out << ref.getAsString();
    return out;
}