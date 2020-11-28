#ifndef CONTACTO_H
#define CONTACTO_H

#include <string>

using namespace std;

class Contacto{
    const string nome;
    int tel;
public:
    Contacto(string a, int b): nome(a), tel(b){}

    // Contacto(const Contacto& ref): nome(ref.getNome()) {
    //     tel = ref.getTel();
    // }

    // ~Contacto() {
    //     delete this;
    // }

    Contacto& operator=(const Contacto& c) {
        

        return *this;
    }
    
    
    string getNome() const {return nome;}
    int getTel() const {return tel;}
    void setTel(int a) {tel = a;}
    
    string getAsString() const;
};

#endif /* CONTACTO_H */

