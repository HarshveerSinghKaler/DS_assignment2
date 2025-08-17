#include <iostream>
#include <vector>
using namespace std;

int countPairs(vector<int>& arr, int k) {
    int n = arr.size();
    int count = 0;

    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(abs(arr[i]-arr[j]) == k) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    vector<int> v(n);

    for(int i=0; i<n; i++) {
        cin>>v[i];
    } 

    int k;
    cout<<"Enter k: ";
    cin>>k;
    int pairs = countPairs(v, k);
    
    cout<<"The number of pairs are: "<<pairs<<endl;

    return 0;
}