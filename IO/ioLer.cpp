#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream in("teste.txt");
    if(!in.is_open()) cout << "error" << endl;

    string text;
    char c = in.get();
    text.push_back(c);

    cout << "Mostrando cada caractere: " << endl;
    while(in.good()) {
        cout << c;
        c = in.get();
        text.push_back(c);
    }

    cout << endl << "String: " << text << endl;
    return 0;
}
