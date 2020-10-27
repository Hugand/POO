

#include <iostream>

#include "Caderno.h"


using namespace std;

int main(){
    
    Caderno c("Note", "Verde", 80, 40, 20, "ISEC");
    
    c.setLocal("Casa");
    
    cout << c.getLocal() << endl;
    
    c.abrir();
    
    c.escrever("Ola Mundo");
    
    c.setLocal("Cafe");
    
    
    c.fechar();
    
    cout << c.getPaginas() << endl;
    
    c.escrever("Mais uma frase");
    
    cout << c.obtemTexto() << endl;

    cout << c.getTotalPalavras() << endl;

    cout << c.getAsString() << endl;

    
    return 0;
            
            
}
