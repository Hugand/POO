#include <iostream>
#include "Ponto.h"
#include "Retangulo.h"
#include <vector>

using namespace std;

int main() {
    Ponto a(2, 3);
    Retangulo r(a, 4, 12);

    a.setX(12);
    a.setY(7);

    cout << r.getAsString() << endl;
    cout << a.getAsString() << endl;

    return 0;
}

int mainPonto() {
    Ponto a(1, 1);
    Ponto b(4, 1);
    const Ponto c(3, 2);
    Ponto d;

    // c.setx(2); --- error because object is constant

    cout << a.getAsString() << endl << b.getAsString() << endl;
    cout << a.dist(b) << endl;

    b.setX(3);
    b.setY(5);
    cout << c.getAsString() << endl << b.getAsString() << endl;
    cout << c.dist(b) << endl;

    cout << d.getAsString() << endl;
    

    return 0;
}