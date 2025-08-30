#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s, res = "";

    cout<<"Enter string: ";
    getline(cin, s);

    for(char ch : s) {
        if(!(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')) {
            res += ch;
        }
    }
    
    cout<<"Final string is: "<<res<<endl;

    return 0;
}