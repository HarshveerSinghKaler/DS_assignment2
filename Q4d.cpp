#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of strings: ";
    cin>>n;
    cin.ignore();

    string s[n];

    cout<<"Enter strings: ";
    for(int i=0; i<n; i++) {
        getline(cin, s[i]);
    }

    sort(s, s+n);

    cout<<"Strings in alphabetical order are: ";

    for(int i=0; i<n; i++) {
        cout<<s[i]<<" ";
    }

    return 0;
}