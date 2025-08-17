#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int noOfInversions(vector<int>&v) {
    int n = v.size();
    int count = 0;
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if((i < j) && (v[i] > v[j])) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> v(n);

    cout<<"Enter the elements from 1 to n: ";
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    int x = noOfInversions(v);

    cout<<x;

    return 0;
}