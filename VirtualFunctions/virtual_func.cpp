#include <iostream>

using namespace std;

class ClasseMae
{
public:
    virtual void showMessage() {
        cout << "Classe mãe " << endl;
    }
};

class ClasseFilha : public ClasseMae
{
public:
    virtual void showMessage() {
        cout << "Classe filha " << endl;
    }
};

void foo(ClasseMae* p) {

    p->showMessage();
}

int main(int argc, char const *argv[])
{
    ClasseMae mae;
    ClasseFilha filha;

    foo(&mae);
    foo(&filha);
    return 0;
}
