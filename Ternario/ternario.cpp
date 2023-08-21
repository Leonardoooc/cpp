#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num = 10;

    /*if (num > 10) cout << "maior que 10" << endl;
    else cout << "menor ou igual a 10" << endl;*/

    num > 10 ? cout << "maior" : cout << "menor ou igual";
    return 0;
}
