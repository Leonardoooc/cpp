#include <iostream>

using namespace std;
class Conta
{
public:
    int numero;
    double saldo;

    double deposit(double quantidade) {
        if (quantidade > 0) {
            saldo += quantidade;
        }
        return saldo;
    }
    
    double withdraw(double quantidade) {
        if (quantidade > 0 && saldo >= quantidade) {
            saldo -= quantidade;
        }
        return saldo;
    }
};




int main(int argc, char const *argv[])
{
    Conta c;

    c.numero = 1;
    c.saldo = 50.54;

    cout << c.saldo << endl;
    cout <<  c.deposit(100) << endl;
    cout << c.withdraw(190.53) << endl;
    return 0;
}
