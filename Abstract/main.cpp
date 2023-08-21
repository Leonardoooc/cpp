#include <iostream>
#include "pilha.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Pilha<const char*> p(100);


    p.push("py");
    p.push("c++");
    p.push("js");

    if(p.vazio()) cout << "pilha vazia" << endl;
    else cout << "pilha não vazia" << endl;

    if (p.getTopo() != NULL) cout << p.getTopo() << endl;
    else cout << "pilha vazia" << endl;

    
    return 0;
}
