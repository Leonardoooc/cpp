#include <iostream>
#include <string.h>

using namespace std;

class Pessoa
{
public:
    char nome[100];
    char cpf[20];
    int idade;
};

int getIdade(Pessoa pessoas[], const char* nome, int tam) {
    for (int i = 0; i < tam; i++)
    {
        if(strcmp(nome, pessoas[i].nome) == 0)
            return pessoas[i].idade;
    }
    return -1;
}


int main(int argc, char const *argv[])
{
    Pessoa pessoas[3] = {
        {"abc", "def", 10},
        {"efg", "ert", 32},
        {"els", "dmc", 52}
    };

    int tam = sizeof(pessoas) / sizeof(pessoas[0]);
    int idade = getIdade(pessoas, "abc", tam);
    if (idade != -1) {
        cout << "Idade do efg: " << idade << endl;
    } else {
        cout << "pessoa nao encontrada" << endl;
    }
    return 0;
}
