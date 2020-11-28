#include <sstream>
#include <string>
#include "Desenho.h"

using namespace std;

bool Desenho::addR(Retangulo r) {
    vector<Retangulo>::iterator it;
    
    bool isNewRectOverlapping = r.overlaps(v);

    if(!isNewRectOverlapping) {
        it = v.begin();
        while(it < v.end() && it->getArea() < r.getArea())
            it++;
        
        v.insert(it, r);
    }

    return isNewRectOverlapping;
}


int Desenho::areaTotal() const {
    int totalArea = 0;
    
    for(auto it = v.begin(); it < v.end(); it++) {
        totalArea += it->getArea();
    }

    return totalArea;
}

vector<Retangulo> Desenho::getRLocal(Ponto p) const {
    vector<Retangulo> rects;
    vector<Retangulo>::iterator it;

    for(auto it = v.begin(); it < v.end(); it++) {
        if(p.cmpPonto(it->getCSE())) {
            rects.push_back((*it));
        }
    }

    return rects;
}

string Desenho::getAsString() const {
    ostringstream os;
    vector<Retangulo>::iterator it;
    
    os << "Nome: " << nome << endl;

    for(auto it = v.begin(); it < v.end(); it++) {
        os << it->getAsString() << endl;
    }

    return os.str();
}

bool Desenho::deleteR(int minArea) {
    vector<Retangulo>::iterator it;
    it = v.begin();

    while(it < v.end()) {
        if(it->getArea() < minArea) {
            it = v.erase(it);
        } else { it++; }
    }

    return true;
}