#ifndef PONTO_H
#define PONTO_H

#include <string>
#include <initializer_list>
#include <vector>

using namespace std;


class Ponto{
    int x, y;

public:
    Ponto(int i = 0, int h = 0): x(i), y(h) {}

    void setX(int i) { x = i; }
    void setY(int i) { y = i; }

    int getX() { return x; }
    int getY() { return y; }

    float dist(Ponto p) const;

    string getAsString() const;
};

#endif /* PONTO_H */
