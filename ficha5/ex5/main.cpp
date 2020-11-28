#include <iostream>
#include <vector>

#include "Pessoa.h"
#include "Clube.h"

using namespace std;

int main() {
    
    vector<Pessoa*>v = 
    {new Pessoa("Ana",123,111), new Pessoa("Carlos",456,222), new Pessoa("Luis",789,888)};
    
//    for(auto it=v.begin(); it<v.end(); it++)
//        cout << (*it)->getAsString() << endl;

    Clube c1("Xadrez", 10);
    Clube c2("Filatelia", 2);
    
    c1.setMembro(v[1]);
    c1.setMembro(v[0]);
    c1.setMembro(v[2]);
    
    cout << c1 << endl;
    
    c1.eliminaMembro(123);

    cout << c1 << endl;

    Clube c3(c1);
    
    c2 = c1;
    c1.eliminaMembro(456);
    
    cout << c1 << endl;
    cout << c3 << endl;
    cout << c2 << endl;
    
    for(auto p: v)
        delete p;

    return 0;
}

