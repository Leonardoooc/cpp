#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;

    v.push_back(20);
    v.push_back(40);
    v.push_back(80);

    int tam = v.size();
    for (int i=0;i<tam;i++) {
        cout << v[i];
    }
    return 0;
}
