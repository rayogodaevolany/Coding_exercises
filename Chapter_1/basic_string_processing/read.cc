#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream f("sample.txt");
    string s;
    string res;
    while (getline(f, s))
    {
        if (s.substr(0,7) == ".......") break;

        res+= s + " ";
    }
    cout << res << endl;
    f.close();
    return 0;
}
