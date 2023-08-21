#include <iostream>
#include <string.h>

using namespace std;

class Pessoa 
{
protected:
    char nome[100];
    int idade;
    int* parentes;
    double* filhos;
public:
    Pessoa (const char* nome, int idade) {
        strcpy(this->nome, nome);
        this->idade = idade;
        parentes = new int[100];
        filhos = new double[100];
        cout << "Constructor " << nome << endl;
    }
    char * getNome() {
        return nome;
    }
    int getIdade() {
        return idade;
    }
    ~Pessoa() {
        cout << "Destructor " << nome << endl;
        delete[] parentes;
        delete[] filhos;
    }
};

int main(int argc, char const *argv[])
{
    Pessoa pessoas[] = {
        {"joao", 30},
        {"maria", 20},
        {"paulo", 53},
        {"carlos", 21}
    };

    //cout << pessoas[0].getIdade() << endl;
    //cout << pessoas[0].getNome() << endl;
    return 0;
}
