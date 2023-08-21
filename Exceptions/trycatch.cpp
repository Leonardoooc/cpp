#include <iostream>

using namespace std;


int fat(int n) {
    if (n < 0) throw "Numero negativo";
    return ++n;
}

int main(int argc, char const *argv[])
{
    try
    {
        cout << fat(-1) << endl;
    } catch(const char* e) {
        cerr << e << '\n';
    } catch(...) {
        cerr << "Erro inesperado";
    }
    
    return 0;
}
