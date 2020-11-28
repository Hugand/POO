#include "Agenda.h"

int main(){

    Agenda a;
      
    a.addContacto("Ana", 123123123);
    a.addContacto("Pedro", 333444555);
       

    Agenda b(a);
    Agenda c;

    a.atualizaContacto("Pedro", 999999999);

    c = b;
    b.atualizaContacto("Pedro", 555555555);
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
    // string s = "Pedro";
    
    // cout << "O telefone do/a " << s << " e: " << a.getTel(s) << endl;   
   
    // a.atualizaContacto("Pedro", 999999999);
    
    // cout << "O telefone do/a " << s << " e: " << a.getTel(s) << endl;   

    // a.eliminaContacto(123123123);
    
    // a.addContacto("Luis",12);   
    // cout << a << endl;
       
    return 0;
}


