#include <iostream>

using namespace std;

struct Pessoa {
private:
    int idade;


public:
    Pessoa(int idade);

    void setIdade(int idade) 
    {
        this->idade = idade;
    }
    int getIdade()
    {
        return this->idade;
    }
};

Pessoa::Pessoa(int idade) {
    setIdade(idade);
}

int main(int argc, char const *argv[])
{
    Pessoa p(20);
    cout << p.getIdade();
    return 0;
}
