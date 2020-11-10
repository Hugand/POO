#include "Pessoa.h"
#include "Conta.h"
#include "Banco.h"
#include <iostream>

using namespace std;

int main(){
    Pessoa p1("Ana Silva", 123456, 111222333);
    Pessoa p2("Bruno Pato", 567890, 444555666);
    Pessoa p3("Luisa Alves", 111222, 777888999);
    
    Banco b1("CGD");
    Banco b2("BEST");

    b1.addConta(&p1);
    b1.addConta(&p2);
    b1.addConta(&p3);

    b2.addConta(&p2);
    b2.addConta(&p3);

    b1.atualizaSaldo(123456, 50);
    b1.atualizaSaldo(123456, -30);
    b1.atualizaSaldo(123456, -50);
    b1.atualizaSaldo(567890, 200);
    b2.atualizaSaldo(567890, 100);
    b2.atualizaSaldo(111222, 501);

    if(b1.deleteConta(p1.getCC()) == 1)
        cout << "Conta eliminada com sucesso" << endl;
    else
        cout << "Erro ao eliminar conta" << endl;

    cout << b1.obterSaldo(123456) << endl;
   
    cout << b2.getTotalSaldos() << endl;

    cout << b1.getAsString() << endl;
    cout << b2.getAsString() << endl;

    if(b2.transferDinheiro(p2.getCC(), p3.getCC(), 100) == 1)
        cout << "Transferencia bem sucedida" << endl;
    else
        cout << "Transferencia mal sucedida" << endl;

    cout << b1.getAsString() << endl;
    cout << b2.getAsString() << endl;
    
    if(b2.transferDinheiro(p2.getCC(), p3.getCC(), 100) == 1)
        cout << "Transferencia bem sucedida" << endl;
    else
        cout << "Transferencia mal sucedida" << endl;

    return 0;
}