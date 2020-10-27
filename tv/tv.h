#ifndef TV_H
#define TV_H

#include <string>
#include <initializer_list>

using namespace std;


class TV{
    static const int MAX_CANAIS = 10, V_MAX = 10, V_MIN = 0;
    string canais[MAX_CANAIS];
    int nCanais;
    int volume;
    bool isLigada;

public:
    TV(initializer_list<string> list) {
        initializer_list<string> :: iterator  it;

        

    }

    void ligar() { isLigada = true; }
    void desligar() { isLigada = false; }
    void aumentarVolume(); // { volume++; }
    void diminuirVolume(); // { volume--; }
};

#endif /* CADERNO_H */
