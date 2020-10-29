#include <iostream>
#include "tv.h"
#include <vector>

using namespace std;

int main(){
    TV tv({"RTP", "RTP2", "SIC", "TVI"});

    cout << tv.getCanais() << endl;

    tv.ligar();
    tv.aumentarVolume();

    tv.mudarCanal(3);
    tv.mudarCanal(7);
    tv.diminuirVolume();
    tv.aumentarVolume(4);
    tv.desligar();
    tv.diminuirVolume();

    /*
        RESULT SHOULD BE:
        Volume: 4
        Canal Atual: SIC
        Estado: desligada
        Num de canais: 4
    */

    cout << tv.getAsString() << endl;
    return 0;
}

/*
    Vector implementation testing
*/
int _main() {
    vector<int> v = { 10, 12, -4, 20, 2 };
    
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    v.push_back(188);

    vector<int>::iterator it;

    for(it = v.begin(); it < v.end(); it++) 
        cout << *it << " ";
    cout << endl;
    return 0;
}