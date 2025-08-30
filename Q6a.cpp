#include <iostream>
using namespace std;

int main() {
    int m, n, t;
    cin>>m>>n>>t;
    
    int A[100][3];
    for (int i=0; i<t; i++) cin >> A[i][0] >> A[i][1] >> A[i][2];

    int B[100][3];
    B[0][0] = n;
    B[0][1] = m;
    B[0][2] = t;

    int k=1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<t; j++) {
            if (A[j][1]==i) {
                B[k][0] = A[j][1];
                B[k][1] = A[j][0];
                B[k][2] = A[j][2];
                k++;
            }
        }
    }

    for (int i=0; i<=t; i++)
        cout << B[i][0] << " " << B[i][1] << " " << B[i][2] << endl;

    return 0;
}