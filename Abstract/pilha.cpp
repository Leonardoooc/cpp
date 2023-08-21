#include <iostream>
#include "pilha.h"

using namespace std;

template <class Type>
Pilha<Type>::Pilha(int tam) {
    vet = new Type[tam];
    max_tam = tam-1;
    topo = -1;
}

template <class Type>
Pilha<Type>::~Pilha() {
    delete[] vet;
}

template <class Type>
void Pilha<Type>::push(Type e) {
    if (topo == max_tam) cout << "pilha cheia" << endl;
    else vet[++topo] = e;
}

template <class Type>
void Pilha<Type>::pop() {
    if (topo == -1) cout << "pilha vazia" << endl;
    else topo--;
}

template <class Type>
Type Pilha<Type>::getTopo() {
    if (topo != -1) return vet[topo];
    else return NULL;
}

template <class Type>
int Pilha<Type>::vazio() {
    return (topo == -1);
}