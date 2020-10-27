#include<iostream>
#include<string>
using namespace std;

#define TAM 15

class Tabela {
    int tab[TAM];

    public:
        void listar() {
            for(int i = 0; i < TAM; i++){
                cout << tab[i] << " ";
            }

            cout << endl;
        }
        // void preenche(Tabela &a, int v);

        void preencher(int v) {
            for(int i = 0; i < TAM; i++){
                tab[i] =  v++;
            }
        }

        int& elementoEm(int pos) {
            return tab[pos];
        }
};


int main() {
    Tabela tab;

    tab.listar();
    tab.preencher(5);
    tab.listar();
    cout << "Elem at 5: " << tab.elementoEm(5) << endl;

}