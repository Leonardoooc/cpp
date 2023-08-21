#include <iostream>
#include <string.h>

using namespace std;


class LinguagemAmiga;

class Linguagem
{
    friend void classeAmiga(Linguagem*);

protected:
    char nome[100];
    LinguagemAmiga* lamiga;

public:
    void getNome() {
        cout << nome << endl;
    }
    void setNome(const char* nome) {
        strcpy(this->nome, nome);
    }
    void mostrarAmiga();

};

class LinguagemAmiga 
{
    friend class Linguagem;

protected:
    void mostrarAmiga_() {
        cout << "Hello, Friend language" << endl;
    }
};

void classeAmiga(Linguagem* l) {
    cout << "Friend Class: " << l->nome << endl;
}

void Linguagem::mostrarAmiga() {
    lamiga->mostrarAmiga_();
}

int main(int argc, char const *argv[])
{
    Linguagem l;
    
    l.setNome("C#");

    l.mostrarAmiga();
    

    //classeAmiga(&l);
    return 0;
}
