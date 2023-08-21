#include <iostream>
#include <string.h>
#define MAX 10

using namespace std;

class Carro {
public:
    char nome[100];
    char cor[20];
    char placa[20];
    double preco;
};

void sort(Carro carros[], int tam) {
    Carro aux;
    for (int i = tam; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (strcmp(carros[j-1].nome, carros[j].nome) == 1) {
                aux = carros[j-1];
                carros[j-1] = carros[j];
                carros[j] = aux;
            }
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    Carro carros[MAX];
    int i = 0;
    while(true) {
        char resp;
        cout << "Digite o nome do carro: ";
        cin >> carros[i].nome;
        cout << "Digite o preço do carro: ";
        cin >> carros[i].preco;
        cout << "Você deseja continuar? (S) ou (N)";
        cin >> resp;
        if (resp != 'S') {
            break;
        }
        i++;
    }
    cout << endl;

    sort(carros, i);
    for (int j = 0; j <= i; j++)
    {
        cout << "Nome do carro: " << carros[j].nome << endl;
        cout << "Preço: " << carros[j].preco << endl;
        cout << endl;
    }
    
    
    return 0;
}
