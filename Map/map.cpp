#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    //primeiro a chave, segundo valor
    map<int, string> mapa = {
        {1, "jorge"},
        {2, "leo"},
        {3, "matheus"},
        make_pair(4, "afonso")
    };


    mapa.at(1) = "carol";

    cout << mapa[1] << endl;


    //mapa.clear();
    if (mapa.empty()) cout << "mapa vazio" << endl;
    else cout << "mapa nao vazio" << endl;


    if (mapa.count(1) > 0) 
        cout << "1 é um elemento do mapa" << endl;
    else cout << "1 não é um elemento do mapa" << endl;


    //pega todas as chaves e valores
    map<int, string>::iterator it;
    for(it = mapa.begin(); it != mapa.end(); it++) {
        cout << "Chave " << it->first << " => " << it->second << endl;
    }

    //exclui elemento
    it = mapa.find(2);
    mapa.erase(it);
    for(it = mapa.begin(); it != mapa.end(); it++) {
        cout << "Chave " << it->first << " => " << it->second << endl;
    }

    it = mapa.begin();
    mapa.insert({2, "maria"});


    //checa se chave existe
    if(mapa.find(2) == mapa.end()) cout << "chave 2 não existe" << endl;
    else cout << "chave 2 existe" << endl;


    multimap<int, string> mm = {
        {1, "albedo"},
        {2, "klee"},
        {3, "yae"},
        {4, "miko"},
        {5, "nahida"}
    };

    

    multimap<int, string>::iterator mt = mm.begin();


    while(mt != mm.end()) {
        cout << mt->first << " => " << mt->second << endl;
        mt++;
    }


    //definir limite superior e inferior de consulta
    multimap<int, string>::iterator it_low, it_up;
    
    it_low = mm.lower_bound(2);
    it_up = mm.upper_bound(4);

    for (mt = it_low; mt != it_up; mt++) {
        cout << mt->first << " => " << mt->second << endl;
    }


    return 0;
}
