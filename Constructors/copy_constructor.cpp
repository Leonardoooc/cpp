#include <iostream>
#include <string.h>

using namespace std;

class Estudante
{
protected:
    char* nome;
public:
    Estudante(const char* nome) {
        cout << "Constructing " << nome << endl;
        int tam = strlen(nome) + 1;
        this-> nome = new char[tam];
        strcpy(this->nome, nome);
    }

    Estudante (const Estudante& e) {
        cout << "Constructing copy " << e.nome << endl;
        int tam = strlen(e.nome) + 50;
        this->nome = new char[tam];
        strcpy(this->nome, "Copia de ");
        strcat(this->nome, e.nome);
    }

    const char* getNome() {
        return nome;
    }
    ~Estudante() {
        cout << "Destructing " << nome << endl;
        delete[] nome;
        nome = 0;

    }
};

void foo2(Estudante e) {

}

void foo() {
    Estudante estudante("joao");
    foo2(estudante);

    cout << "Estudante " << estudante.getNome() << endl;

}

int main(int argc, char const *argv[])
{
    foo();
    return 0;
}
