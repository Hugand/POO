#ifndef TV_H
#define TV_H

#include <string>
#include <initializer_list>
#include <vector>

using namespace std;

class TV{
    static const int V_MAX = 10, V_MIN = 0;
    vector<string> canais;
    int canalAtual;
    int volume;
    bool isLigada = false;

public:
    TV(initializer_list<string> list){
        // initializer_list<string> :: iterator  it;
        volume = 0;
        canalAtual = 0;

        for(auto it = list.begin(); it < list.end(); it++) {
            canais.push_back(*it);
        }
    }

    void ligar() { isLigada = true; }
    void desligar() { isLigada = false; }
    void aumentarVolume(int steps=1); 
    void diminuirVolume(int steps=1);
    void mudarCanal(int newCanal);

    string getCanais();
    int getVolume() { return volume; };
    bool getIsLigada() { return isLigada; };

    string getAsString();
};

#endif /* TV_H */
