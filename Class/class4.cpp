#include <iostream>

using namespace std;
class Conta
{
public:
    int numero;
    double saldo;

    double deposit(double quantidade);
    double deposit(int quantidade);
    
    double withdraw(double quantidade) {
        if (quantidade > 0 && saldo >= quantidade) {
            saldo -= quantidade;
        }
        return saldo;
    }

    double getSaldo() {
        return this->saldo;
    }
    double getNumero() {
        return this->numero;
    }
};

double Conta::deposit(double quantidade) {
    if (quantidade > 0) {
        this->saldo += quantidade;
    }
    return this->saldo;
}

double Conta::deposit(int quantidade) {
    if (quantidade > 0) {
        this->saldo += quantidade;
    }
    return this->saldo;
}

void foo(Conta& c) {
    c.deposit(50);
}

Conta* novaConta(int numero) {
    Conta* c = new Conta;
    c->numero = numero;
    c->saldo = 0.0;
    return c;
}

int main(int argc, char const *argv[])
{
    Conta* pc = novaConta(100);
    
    cout << "Acc Number: " << pc->getNumero() << endl;
    cout << "Saldo: " << pc->getSaldo() << endl;
    return 0;
}
