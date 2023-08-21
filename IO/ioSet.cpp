#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    ofstream output("saida.txt");
    output << "Aprendendo C++" << endl;
    output << "Testando...";
    return 0;
}
