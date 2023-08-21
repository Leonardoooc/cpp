#include <iostream>
#include <string.h>

using namespace std;

class Animal
{
protected:
    char* nome;

public:
    Animal(const char* nome) {

        cout << "constructing animal " << nome << endl;
        this->nome = new char[strlen(nome) + 1];
        strcpy(this->nome, nome);
    }

    ~Animal() {
        cout << "destructing animal " << nome << endl;
        delete[] nome;
        nome = 0;
    }
    const char* getNome() {
        return nome;
    }
};

class Cachorro : public Animal
{
protected:
    int idade;
public:

    Cachorro(const char* nome): Animal(nome) {
        cout << "constructing cachorro " << nome << endl;
        idade = 0;
    }
    int getIdade() {
        return idade;
    }
    void setIdade(int idade) {
        this->idade = idade;
    }
};

int main(int argc, char const *argv[])
{
    Cachorro c("Abe");
    c.setIdade(5);

    cout << "Nome: " << c.getNome() << endl;
    cout << "Idade: " << c.getIdade() << endl;
    return 0;
}
