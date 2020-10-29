#include<iostream>
#include<string>
using namespace std;

class Automovel {
    const string marca;
    const string modelo;
    const int ano;
    string matricula;

    public:
        Automovel(string _marca, string _modelo, int _ano, string _matricula="NA")
        : marca(_marca), modelo(_modelo), ano(_ano), matricula(_matricula) { }

        string getMarca() const { return marca; }
        string getModelo() const { return modelo; }
        int getAno() const { return ano; }
        string getMatricula() { return matricula; }

        void setMatricula(string newMaticula) {
            matricula = newMaticula;
        }

        bool changeMats(Automovel &aut) {
            if(matricula == "NA" || aut.getMatricula() == "NA" || this == &aut) { return false; }
            string tempMat;
            tempMat = aut.getMatricula();

            aut.setMatricula(matricula);
            setMatricula(tempMat);
            return true;
        }
};

int main() {
    Automovel a("Lambo", "Lon3r Lambo", 2018, "12-DF-21");
    Automovel b("Benz", "Benzi no Benz do Benzi", 2019);

    b.setMatricula("66-GY-99");

    cout << a.getMarca() << " " << a.getModelo() << " " << a.getAno() << " " << a.getMatricula() << endl;
    cout << b.getMarca() << " " << b.getModelo() << " " << b.getAno() << " " << b.getMatricula() << endl;

    a.changeMats(b);

    cout << a.getMarca() << " " << a.getModelo() << " " << a.getAno() << " " << a.getMatricula() << endl;
    cout << b.getMarca() << " " << b.getModelo() << " " << b.getAno() << " " << b.getMatricula() << endl;

    return 0;
}