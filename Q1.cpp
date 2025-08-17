// binary search
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array in sorted manner: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int low = 0;
    int high = n-1;

    cout<<"Enter the elment that you want to find: ";
    int x;
    cin>>x;

    bool flag = false;
    
    while(low <= high) {
        int mid = low + (high - low)/2;
        if(arr[mid] == x) {
            cout<<"Element present";
            return 0;
        }
        else if(x > arr[mid]) low = mid + 1;
        else if(x < arr[mid]) high = mid - 1;
    }
    
    cout<<"Element not found";

    return 0;
}