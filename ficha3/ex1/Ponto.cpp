#include "Ponto.h"
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

float Ponto::dist(Ponto p) const{
    int c1 = abs(x - p.getX());
    int c2 = abs(y - p.getY());

    float dist = sqrt(pow(c1, 2) + pow(c2, 2));


    return dist;
}

string Ponto::getAsString() const{
    ostringstream os;

    os << "(" << x << ", " << y << ")";

    return os.str();
}