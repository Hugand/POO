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

    int getArea() const { return larg*alt; }
    string getAsString() const;
};

#endif /* RETANGULO_H */
