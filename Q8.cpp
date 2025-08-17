#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout<<"Enter size: ";
    cin>>n;

    int m = n;
    
    vector<int> v(n);
    
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    if(n == 0) {
        cout<<"Array is empty!";
        return 0;
    }

    if(n == 1) {
        cout<<"The number of unique elements in the array are: "<<1;
        return 0;
    }

    sort(v.begin(), v.end());

    int count = 0;

    if(v[0] != v[1]) count++;
    if(v[n-1] != v[n-2]) count++;

    for(int i=1; i<n-1; i++) {
        if((v[i] != v[i-1]) && (v[i] != v[i+1])) {
            count++;
        }
    }

    cout<<"The number of unique elements in the array are: ";
    cout<<count;

    return 0;
}