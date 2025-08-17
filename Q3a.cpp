#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int arr[n-1];

    cout<<"Enter elements: ";

    for(int i=0; i<n-1; i++) {
        cin>>arr[i];
    }

    if(arr[n-1] != n) {
        cout<<n;
        return 0;
    }

    for(int i=1; i<=n-1; i++) {
        if(arr[i-1] != i) {
            cout<<i;
            break;
        }
    }

    return 0;
}