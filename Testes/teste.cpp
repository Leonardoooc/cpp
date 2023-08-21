#include <iostream>
#include <vector>
#include <string>
#include <string.h>

using namespace std;

typedef struct pessoa 
{
    char nome[100];
    int idade;
}t_pessoa;


int main(int argc, char const *argv[])
{
    t_pessoa p;

    strcpy(p.nome, "Marcos");
    p.idade = 26;
    cout << p.nome << p.idade;
    return 0;
}

