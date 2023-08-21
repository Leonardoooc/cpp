#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int* p = new int[10];

    *p = 1;
    *(p+1) = 2;
    cout << *p << endl << *(p+1) << endl;

    delete[] p;
    return 0;
}
