#include <iostream>
#include "pilha.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Pilha p;


    p.push(10);
    p.push(11);
    p.push(12);

    p.pop();
    cout << p.vazio() << endl;
    cout << p.getTopo() << endl;

    
    return 0;
}
