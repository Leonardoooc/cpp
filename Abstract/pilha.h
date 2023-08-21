template <class Type>

class Pilha
{
private:
    Type* vet;
    int max_tam;
    int topo;

public:
    Pilha<Type>(int tam);
    ~Pilha<Type>();
    void push(Type e);
    void pop();
    Type getTopo();
    int vazio();
};