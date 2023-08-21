#include <iostream>

using namespace std;

class Pessoa
{
private:
    int idade;
    int* vet;
public:
    Pessoa(int idade = 0) {
        this->idade = idade;
        vet = new int[10];
    }
    ~Pessoa() {
        delete[] vet;
    }
    int getIdade() {
        return idade;
    }
};

int main(int argc, char const *argv[])
{
    Pessoa * p = new Pessoa(17);

    cout << p->getIdade() << endl;

    delete p;
    return 0;
}
