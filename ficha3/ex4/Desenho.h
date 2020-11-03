#ifndef DESENHO_H
#define DESENHO_H

#include <string>
#include <initializer_list>
#include <vector>
#include "Retangulo.h"

using namespace std;


class Desenho{
    string nome;
    vector<Retangulo> v;

public:
    Desenho(string n): nome(n) {}

    bool addR(Retangulo r);
    bool deleteR(int minArea);
    int areaTotal() const;
    vector<Retangulo> getRLocal(Ponto p) const;
    string getAsString() const;
};

#endif /* DESENHO_H */
