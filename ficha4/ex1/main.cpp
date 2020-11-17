

#include <iostream>

#include "Fracao.h"


int main(int argc, char** argv){
    
//    Fracao a(1,10), b(2,1), c(1,1), d(2,3);
//
//    a *= b *= d;
//
//    cout << a << endl;
//    cout << b << endl;
//    cout << d << endl;
//    
//    
    Fracao x(1,2), y(2,3), z(3,4), w(2, 4);
    
    // (x *= y) *= z;
    
    // cout << x << endl; 6/24
    // cout << y << endl; 2/3
    // cout << z << endl; 3/4

    // cout << (x == y) << endl; // 0
    // cout << (x == w) << endl; // 1
    // cout << (x == 0.5) << endl; // 1
    // cout << (x != 0.5) << endl; // 0
    // cout << (x != y) << endl; // 1
    // cout << (2 == y) << endl << endl; // 0

    // cout << (x > y) << endl; // 0
    // cout << (x < y) << endl; // 1
    // cout << (x > 0.3) << endl << endl; // 1

    // cout << (x >= w) << endl; // 1
    // cout << (x <= y) << endl; // 1
    // cout << (x >= 0.5) << endl << endl; // 1
    // couy)t << (< ==  << endl;


    cout << x << endl;
    cout << y << endl;

    cout << x++ << endl;
    cout << ++++y << endl;

    cout << x << endl;
    cout << y << endl;
    

    return 0;
}

