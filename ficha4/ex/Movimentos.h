
#ifndef MOVIMENTOS_H
#define MOVIMENTOS_H

#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Movimentos {
    string titular;
    int saldo;
    vector<int> v; // movimentos
public:
    Movimentos(string n, int s): titular(n), saldo(s) {};

    void addMovimento(int montante);

    int getSaldo() const { return saldo; }

    Movimentos& operator+=(const int montante) {
        addMovimento(montante);
        return *this;
    }

    Movimentos& operator-=(const int montante) {
        addMovimento(-montante);
        return *this;
    }


    string getAsString() const;
};

Movimentos operator+(Movimentos m, const int montante);
Movimentos operator-(Movimentos m, const int montante);
bool operator==(const Movimentos& m1, const Movimentos& m2);


ostream& operator<<(ostream& out, const Movimentos& x);

#endif /* MOVIMENTOS_H */

