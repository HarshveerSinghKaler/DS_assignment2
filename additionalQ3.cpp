#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    string t;

    cout<<"Enter string 1: ";
    getline(cin, s);

    cout<<"Enter string 2: ";
    getline(cin, t);

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if(s == t) cout<<"yes";
    else cout<<"no";

    return 0;
}