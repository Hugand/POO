#include <iostream>
#include <vector>
#include "Ponto.h"
#include "Retangulo.h"
#include "Desenho.h"

using namespace std;

int main() {
    Desenho d("Outono");
    Ponto p1(1,2);
    Retangulo r(Ponto(0, 0), 5, 5);

    cout << r.hasPontoInside(Ponto(-1, -1)) << endl;
    
    d.addR(Retangulo(Ponto(1,2), 4, 6));
    // d.addR(Retangulo(Ponto(-1,4), 4, 2));
    // d.addR(Retangulo(Ponto(1,2), 5, 30));
    d.addR(Retangulo(Ponto(20,2), 5, 30));
    d.addR(Retangulo(Ponto(10,6), 4, 2));
    d.addR(Retangulo(Ponto(-12,4), 1, 3));
       
    cout << d.areaTotal() << endl;
    
    cout << d.getAsString() << endl;
    
    auto v = d.getRLocal(p1);
    
    cout << "Existem " << v.size() << " retangulos no ponto " << p1.getAsString() << ":" << endl;
    for(auto x : v){
        cout << x.getAsString() << endl;
    }

    d.deleteR(100);


    cout << d.areaTotal() << endl;
    cout << d.getAsString() << endl;


}

// int mainRetangulo() {
//     Ponto a(2, 3);
//     // Retangulo r(a, 4, 12);

//     a.setX(12);
//     a.setY(7);

//     cout << r.getAsString() << endl;
//     cout << a.getAsString() << endl;

//     return 0;
// }

// int mainPonto() {
//     Ponto a(1, 1);
//     Ponto b(4, 1);
//     const Ponto c(3, 2);
//     Ponto d;

//     // c.setx(2); --- error because object is constant

//     cout << a.getAsString() << endl << b.getAsString() << endl;
//     cout << a.dist(b) << endl;

//     b.setX(3);
//     b.setY(5);
//     cout << c.getAsString() << endl << b.getAsString() << endl;
//     cout << c.dist(b) << endl;

//     cout << d.getAsString() << endl;
    

//     return 0;
// }