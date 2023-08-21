#include <iostream>
#include <string.h>

using namespace std;


class Linguagem
{
protected:
    char nome[100];

public:
    void getNome() {
        cout << nome << endl;
    }
    void setNome(const char* nome) {
        strcpy(this->nome, nome);
    }

};

int main(int argc, char const *argv[])
{
    Linguagem l;
    
    l.setNome("C++");


    l.getNome();
    return 0;
}
