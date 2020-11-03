#ifndef RETANGULO_H
#define RETANGULO_H

#include <string>
#include <initializer_list>
#include <vector>
#include "Ponto.h"

using namespace std;


class Retangulo{
    int larg, alt;
    Ponto cse;

public:
    Retangulo(Ponto& a, int i, int h)
    : cse(a.getX(), a.getY()), larg(i), alt(h) {}
    
    Retangulo(Ponto a, int i, int h)
    : cse(a.getX(), a.getY()), larg(i), alt(h) {}

    Ponto getCSE() const;
    Ponto getCSD() const;
    Ponto getCIE() const;
    Ponto getCID() const;
    bool hasPontoInside(Ponto p) const;
    int getArea() const { return larg*alt; }
    string getAsString() const;
    bool overlaps(vector<Retangulo> rects) const;
};

#endif /* RETANGULO_H */
