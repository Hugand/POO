#include "tv.h"
#include <sstream>
#include <string>

using namespace std;

void TV::aumentarVolume(int steps) {
    if(volume + steps <= V_MAX && isLigada)
        volume += steps;
}

void TV::diminuirVolume(int steps) {
    if(volume - steps >= V_MIN && isLigada)
        volume -= steps;
}

string TV::getCanais() {
    ostringstream os;

    for(string canal : canais){
        os << canal << " ";
    }

    return os.str();
}

void TV::mudarCanal(int newCanal) {
    if(isLigada && newCanal > 0 && newCanal <= canais.size()) {
        canalAtual = newCanal - 1;
    }
}

string TV::getAsString() {
    ostringstream os;

    os << "Volume: " << volume << endl
    << "Canal Atual: " << canais[canalAtual] << endl
    << "Estado: " << (isLigada ? "ligada" : "desligada") << endl
    << "Num de canais: " << canais.size() << endl;

    return os.str();
}