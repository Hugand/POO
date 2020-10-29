

#ifndef CADERNO_H
#define CADERNO_H

#include <string>

using namespace std;

class Caderno{
    string marca, cor, local;
    int nPag, alt, larg;
    bool aberto;
    string conteudo;
   
public:
    Caderno(string a, string b, int c, int d, int e, string f):
    marca(a), cor(b), nPag(c), alt(d), larg(e), local(f) { }

    void setLocal(string novoLocal);
    string getAsString();
    int getTotalPalavras();

    string getLocal() const{ return local;}

    void abrir() { aberto = true; }
    void fechar() { aberto = false; }

    void escrever(string content) { 
        if(aberto == true)
            conteudo = content;
    }
 
    int getPaginas() { return nPag; }

    string obtemTexto() { return conteudo; }
};

#endif /* CADERNO_H */

