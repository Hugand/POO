#include "Caderno.h"
#include <sstream>
#include <string>

using namespace std;

void Caderno::setLocal(string novoLocal){
    if(aberto == false)
        local = novoLocal;
}

int Caderno::getTotalPalavras() {
    int totPalavras = conteudo.length() > 0;
    string palavra;
    stringstream iss;
    iss.str(conteudo);

    while(iss >> palavra)
        totPalavras++;

    return totPalavras;
}

string Caderno::getAsString() const {
    ostringstream os;

    os << "Marca: " << marca << endl << "Cor: " << cor << endl << "Npag: " << nPag << endl
    << "Local: " << local << endl << "Conteudo: " << conteudo << endl;  

    return os.str();
}