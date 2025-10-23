#include <iostream>
#include <string>
using namespace std;

int test(string s){
    int digits = 0;
    int vowels = 0;
    int consonants = 0;
    string vowelstring = "aeiou";

    for (int i = 0; i < s.length(); i++){
        char cur = s.at(i);
        cur = tolower(cur);

        if (isalpha(cur)) {
            if (vowelstring.find(cur) != string::npos){
                vowels++;
            } else {
                consonants++;
            }
        } else 
            if (isdigit(cur)){
                }
    }
    return 0;
}
int main(){
    string s = "I love CS3233 Competitive Programming. i also love AlGoRiThM";
    test(s);

    return 0;
}
