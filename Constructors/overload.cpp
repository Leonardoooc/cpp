#include <iostream>

using namespace std;

class Carro
{
public:
    int ano;
    double preco;

    Carro() {
        ano = 0;
        preco = 0.0;
    } 
    Carro(int ano) {
        this->ano = ano;
        this->preco = 0.0;
    }
    Carro(int ano, double preco) {
        this->ano = ano;
        this->preco = preco;
    }
};



int main(int argc, char const *argv[])
{
    Carro carro;

    Carro carro2(10);
    
    Carro carro3(40, 123.3);

    cout << carro.preco << endl;
    cout << carro2.preco << endl;
    cout << carro3.preco << endl;
    return 0;
}
