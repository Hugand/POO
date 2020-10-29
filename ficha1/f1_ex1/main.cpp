// A hello world program in C++

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string nome = "";
    int idade = -1;

    cout << "Introduza o nome: ";
    cin >> nome;

    cout << "Introduza a idade: ";
    cin >> idade;

    cout << "Nome: " << nome << "\nIdade: " << idade << "\n";

    for(auto c: nome)
        cout << c+2 << " ";

    cout << "\n";
    return 0;

}