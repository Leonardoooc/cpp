#include <iostream>

using namespace std;

class ClasseBase
{
private:
    int n;
protected:
    int n1, n2;
public:
    int n3, n4;

    ClasseBase() {
        n = 0;
        n1 = 1;
        n2 = 2;
        n3 = 3;
        n4 = 4;
    }
};

class SubClasse1 : public ClasseBase
{
public:
    void foo() {
        cout << "Subclasse 1" << endl;
        //cout << n << endl;
        cout << n1 << endl << n2 << endl << n3 << endl << n4 << endl;
    }
};

class SubClasse2 : private ClasseBase
{
public:
    void foo() {
        cout << "Subclasse 2" << endl;
        //cout << n << endl;
        cout << n1 << endl << n2 << endl << n3 << endl << n4 << endl;
    }
    int getN3() {
        return n3;
    }
};

int main(int argc, char const *argv[])
{
    SubClasse1 sub1;
    SubClasse2 sub2;

    sub1.foo();
    sub2.foo();

    cout << "Subclasse1 na main" << endl;
    cout << sub1.n3 << endl << sub1.n4 << endl;

    cout << "Subclasse2 na main" << endl;
    cout << sub2.getN3() << endl;
    return 0;
}
