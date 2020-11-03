#include "Retangulo.h"
#include <sstream>
#include <string>

using namespace std;

string Retangulo::getAsString() const {
    ostringstream os;

    os << "CSE: " << cse.getAsString() << 
        " DIM: " << larg << " * " << alt << 
        " AREA: " << getArea();

    return os.str();
}

bool Retangulo::hasPontoInside(Ponto p) const {
    bool isInBounds = false;

    isInBounds = 
            p.getX() >= cse.getX()
        &&  p.getX() <= cse.getX() + larg
        &&  p.getY() >= cse.getY()
        &&  p.getY() <= cse.getY() + alt;

    return isInBounds;
}

bool Retangulo::overlaps(vector<Retangulo> rects) const {
    bool isNewRectOverlapping = false;

    for(auto it = rects.begin(); it < rects.end(); it++) {
        isNewRectOverlapping = 
            it->hasPontoInside(getCSE()) ||
            it->hasPontoInside(getCSD()) ||
            it->hasPontoInside(getCIE()) ||
            it->hasPontoInside(getCID());

        if(isNewRectOverlapping) break;
    }

    return isNewRectOverlapping;
}

Ponto Retangulo::getCSE() const {return cse; }
Ponto Retangulo::getCSD() const { return Ponto(cse.getX() + larg, cse.getY()); }
Ponto Retangulo::getCIE() const { return Ponto(cse.getX(), cse.getY() + alt); }
Ponto Retangulo::getCID() const { return Ponto(cse.getX() + larg, cse.getY() + alt); }