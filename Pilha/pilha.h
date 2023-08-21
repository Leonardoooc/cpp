class Pilha
{
private:
    int * vet;
    int max_tam;
    int topo;

public:
    Pilha();
    ~Pilha();
    void push(int e);
    void pop();
    int getTopo();
    int vazio();
};