#include <iostream>
#include <list>
using namespace std;

list<int> getindex(string original, string searchterm){
    list<int> reslist;
    int res = original.find(searchterm);
    int offset = 0;

    while (res != string::npos){
        reslist.push_back(res);
        offset = res + searchterm.length();
        res = original.find(searchterm, offset);
    }
    if (reslist.empty()) reslist.push_back(-1);
    return reslist;
}

void test(string s, string m){
    list<int> res = getindex(s, m);

    while (!res.empty()){
        cout << res.front() << "\n";
        res.pop_front();
    }
    cout << endl;
}

int main(){
    string s = "I love CS3233 Competitive Programming. i also love AlGoRiThM";
    string m = "book";
    test(s, m);

    string s1 = "abc abc abc";
    string m1 = "abc";
    test(s1,m1);

    return 0;
}
