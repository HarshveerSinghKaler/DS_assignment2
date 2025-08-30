#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int arr[100];

    int length = n*(n+1)/2;

    for(int i=0; i<length; i++) {
        cin>>arr[i];
    }

    for(int i=1; i<=n; i++) {
        for(int j=1; j<n; j++) {
            if(i>=j) cout<<arr[i*(i-1)/2 + (j-1)]<<" ";
            else cout<<arr[j*(j-1)/2 + (i-1)]<<" ";
        }
        cout<<endl;
    }

    return 0;
}