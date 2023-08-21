#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v(2);

    v[0] = 1;
    v[1] = 2;

    cout << v.back() << endl;
    cout << v.front() << endl;

    
    while(!v.empty()) {
        v.pop_back();
    }


    
 

    if (v.empty()) cout << "Vetor vazio." << endl;
    else cout << "Vetor nao vazio" << endl;
    
    vector<int>::iterator it = v.begin();
    
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    vector<int>::reverse_iterator rit;
    int i = 0;
    for(rit = v.rbegin(); rit != v.rend(); rit++) {
        cout << *rit << endl;
    }
    
    return 0;
}
