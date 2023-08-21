#include <iostream>

using namespace std;

class Pai1
{
public:
    void foo() {
        cout << "Pai1" << endl;
    }
};

class Pai2
{
public:
    void foo() {
        cout << "Pai2" << endl;
    }
};

class Filha : public Pai1, public Pai2
{

};

int main(int argc, char const *argv[])
{
    Filha f;
    f.Pai1::foo();
    f.Pai2::foo();
    return 0;
}
