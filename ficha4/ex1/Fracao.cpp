
#include <iostream>

#include "Fracao.h"


Fracao operator*( const Fracao& a, const Fracao& b){
    
    Fracao c;
    
    c.setNum(a.getNum()*b.getNum());
    c.setDen(a.getDen()*b.getDen());
    
    return c;      
}

bool operator==( const Fracao& a, const Fracao& b){
    return (float) a.getNum() / a.getDen() == (float) b.getNum() / b.getDen();
}

bool operator==( const Fracao& a, const float& b){
    return (float) a.getNum() / a.getDen() == b;
}

bool operator==( const float& a, const Fracao& b){
    return a == (float) b.getNum() / b.getDen();
}

bool operator!=( const float& a, const Fracao& b){
    return !(a==b);
}

bool operator!=( const Fracao& a, const float& b){
    return !(a==b);
}

bool operator!=( const Fracao& a, const Fracao& b){
    return !(a==b);
}


bool operator>( const Fracao& a, const Fracao& b){
    return (float) a.getNum() / a.getDen() > (float) b.getNum() / b.getDen();
}

bool operator>( const Fracao& a, const float& b){
    return (float) a.getNum() / a.getDen() > b;
}

bool operator>( const float& a, const Fracao& b){
    return a > (float) b.getNum() / b.getDen();
}

bool operator<( const Fracao& a, const Fracao& b){
    return !(a>b || a==b);
}

bool operator<( const Fracao& a, const float& b){
    return !(a>b || a==b);
}

bool operator<(const float& a, const Fracao& b){
    return !(a>b || a==b);
}
bool operator>=( const Fracao& a, const Fracao& b){
    return a > b || a == b;
}

bool operator>=( const Fracao& a, const float& b){
    return a > b || a == b;
}

bool operator>=( const float& a, const Fracao& b){
    return a > b || a == b;
}

bool operator<=( const Fracao& a, const Fracao& b){
    return !(a > b || a == b);
}

bool operator<=( const Fracao& a, const float& b){
    return !(a > b || a == b);
}

bool operator<=( const float& a, const Fracao& b){
    return !(a > b || a == b);
}

ostream& operator<<(ostream& out, const Fracao& x){
    out << x.getAsString();
    
    return out;
}