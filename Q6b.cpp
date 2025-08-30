#include <iostream>
using namespace std;
int main() {
    int m, n, t1, t2;
    cin >> m >> n >> t1;
    int A[100][3];
    for (int i=0; i<t1; i++) cin >> A[i][0] >> A[i][1] >> A[i][2];

    cin >> t2;
    int B[100][3];
    for (int i=0; i<t2; i++) cin >> B[i][0] >> B[i][1] >> B[i][2];

    int C[200][3], k=0;
    int i=0, j=0;
    while(i<t1 && j<t2) {
        if(A[i][0]<B[j][0] || (A[i][0]==B[j][0] && A[i][1]<B[j][1]))
            {C[k][0]=A[i][0]; C[k][1]=A[i][1]; C[k][2]=A[i][2]; i++; k++;}
        else if(B[j][0]<A[i][0] || (B[j][0]==A[i][0] && B[j][1]<A[i][1]))
            {C[k][0]=B[j][0]; C[k][1]=B[j][1]; C[k][2]=B[j][2]; j++; k++;}
        else
            {C[k][0]=A[i][0]; C[k][1]=A[i][1]; C[k][2]=A[i][2]+B[j][2]; i++; j++; k++;}
    }
    while(i<t1){C[k][0]=A[i][0]; C[k][1]=A[i][1]; C[k][2]=A[i][2]; i++; k++;}
    while(j<t2){C[k][0]=B[j][0]; C[k][1]=B[j][1]; C[k][2]=B[j][2]; j++; k++;}

    for(int x=0;x<k;x++) cout << C[x][0] << " " << C[x][1] << " " << C[x][2] << endl;
}