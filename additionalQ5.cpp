#include <iostream>
using namespace std;

void duplicate(int arr[], int n, int i) {
    for(int j=n-1; j>i; j--) {
        arr[j] = arr[j-1];
    }
}

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter elements of the array: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++) {
        if(arr[i] == 2) {
            duplicate(arr, n, i);
            i++;
        }
    }

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}