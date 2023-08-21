#include <iostream>
#include <string>

using namespace std;

void showMessage(const char* str) {
    cout << str << endl;
}

int main(int argc, char const *argv[])
{
    string str = "avon";

    /*cout << str.length() << endl;
    cout << str.at(1) << endl;
    cout << str.front() << endl;*/

    //str.append(" abed");

    //str.push_back('o');

    //str.insert(str.length(), "castro");

    //str.erase(2, str.length());

    //str.erase(0, str.length());

    //str.clear();

    /*if (str.empty()) cout << "String vazia" << endl;
    else cout << str << endl;*/



    //showMessage(str.c_str());

    //str.replace(0, 5, "castro");

    size_t achou = str.find("vco");

    if (achou != string::npos) cout << "achou substring" << endl;
    else cout << "substring n encontrada" << endl;
    
   /*string my_str;
    cout << "Digite: ";
    getline(cin, my_str);

    cout << my_str << endl;*/

    str += "castro";
    cout << str << endl;

    return 0;
}
