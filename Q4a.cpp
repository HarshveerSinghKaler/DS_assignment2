#include <iostream>
#include <string>
using namespace std;

int main() {
    string s2, s1;

    cout<<"Enter string 1: ";
    getline(cin, s1);

    cout<<"Enter string 2: ";
    getline(cin, s2);

    string res = s1 + s2;
    cout<<"Concatenated string is: "<<res<<endl;

    return 0;
}