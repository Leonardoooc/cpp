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

void foo(Conta* pc) {
    pc->deposit(50);
}

int main(int argc, char const *argv[])
{
    Conta c;
    Conta* pc = &c;
    pc->numero = 1;
    pc->saldo = 200.00;


    cout << c.saldo << endl;
    cout <<  pc->deposit(45.27) << endl;
    cout << pc->withdraw(24.12) << endl;

    foo(&c);

    cout << pc->getSaldo() << endl;
    return 0;
}
