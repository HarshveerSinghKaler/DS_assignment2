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

    // if(arr[n-1] != n) {
    //     cout<<n;
    //     return 0;
    // }

    int low = 0;
    int high = n-2;

    int x;

     while(low <= high) {
        int mid = low + (high - low)/2;
        if(arr[mid] == mid + 1) low = mid + 1;
        else {
            high = mid - 1;
            x = mid+1;
        }
    }

    cout<<"missing number is: "<<x<<endl;

    return 0;
}