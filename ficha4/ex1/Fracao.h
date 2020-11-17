
#ifndef FRACAO_H
#define FRACAO_H

#include <string>
#include <sstream>

using namespace std;

class Fracao {
    int num, den;
public:
    Fracao(int a=0, int b=1):num(a) //den(b>0 ? b : 1)
    {
        if(b>0)
            den = b;
        else
            den = 1;           
    }
    
    int getNum() const{return num;}
    int getDen() const{return den;}
    
    void setNum(int a){num = a;}
    void setDen(int a){if(a>0) den=a;}

    string getAsString() const{
        ostringstream os;
        
        os << "(" << num << "/" << den << ")";
        return os.str();
    } 
    
    
    Fracao& operator*=(const Fracao& x){      
        num *= x.getNum();
        den *= x.getDen();
        
        return *this;
    }

    Fracao& operator++(){
        num += den;
        return *this;
    }

    const Fracao operator++(int){
        Fracao tmp = *this;
        num += den;
        
        return tmp;
    }

    operator int() const {
        return num/den;
    }
    
};


Fracao operator*(const Fracao& a, const Fracao& b);

bool operator==(const Fracao& a, const Fracao& b);
bool operator==(const Fracao& a, const float& b);
bool operator==(const float& a, const Fracao& b);

bool operator!=(const Fracao& a, const Fracao& b);
bool operator!=(const Fracao& a, const float& b);
bool operator!=(const float& a, const Fracao& b);

bool operator>(const Fracao& a, const Fracao& b);
bool operator>(const Fracao& a, const float& b);
bool operator>(const float& a, const Fracao& b);

bool operator<(const Fracao& a, const Fracao& b);
bool operator<(const Fracao& a, const float& b);
bool operator<(const float& a, const Fracao& b);

bool operator>=(const Fracao& a, const Fracao& b);
bool operator>=(const Fracao& a, const float& b);
bool operator>=(const float& a, const Fracao& b);

bool operator<=(const Fracao& a, const Fracao& b);
bool operator<=(const Fracao& a, const float& b);
bool operator<=(const float& a, const Fracao& b);


ostream& operator<<(ostream& out, const Fracao& x);

#endif /* FRACAO_H */

