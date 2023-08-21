#include <iostream>
#include "pilha.h"

using namespace std;

Pilha::Pilha() {
    vet = new int[100];
    max_tam = 99;
    topo = -1;
}
Pilha::~Pilha() {
    delete[] vet;
}
void Pilha::push(int e) {
    if (topo == max_tam) cout << "pilha cheia" << endl;
    else vet[++topo] = e;
}
void Pilha::pop() {
    if (topo == -1) cout << "pilha vazia" << endl;
    else topo--;
}
int Pilha::getTopo() {
    if (topo != -1) return vet[topo];
    else return -1;
}
int Pilha::vazio() {
    return (topo == -1);
}