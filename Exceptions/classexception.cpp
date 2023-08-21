#include <iostream>
#include <exception>
#include <string.h>

using namespace std;

class ExceptionCustom : public exception
{
protected:
    char msg[100];

public:
    ExceptionCustom(const char* e) {
        strcpy(msg, e);
    }
    virtual const char* what() {
        return msg;
    }
};

int fat(int n) {
    if (n < 0) throw ExceptionCustom("Numero negativo");
    return ++n;
}

int main(int argc, char const *argv[])
{
    try {
        cout << fat(-1) << endl;
    } catch (ExceptionCustom e) {
        cerr << e.what() << endl;
    } catch(...) {
        cerr << "Erro inesperado";
    }
    return 0;
}
