#include <iostream>
using namespace std;
int main() {
    int m1,n1,t1;
    cin >> m1 >> n1 >> t1;
    int A[100][3];
    for(int i=0;i<t1;i++) cin >> A[i][0] >> A[i][1] >> A[i][2];

    int m2,n2,t2;
    cin >> m2 >> n2 >> t2;
    int B[100][3];
    for(int i=0;i<t2;i++) cin >> B[i][0] >> B[i][1] >> B[i][2];

    if(n1!=m2){cout<<"Multiplication not possible"; return 0;}

    int C[100][3], k=0;
    for(int i=0;i<t1;i++){
        for(int j=0;j<t2;j++){
            if(A[i][1]==B[j][0]){
                int r = A[i][0];
                int c = B[j][1];
                int val = A[i][2]*B[j][2];
                int found = -1;
                for(int l=0;l<k;l++){
                    if(C[l][0]==r && C[l][1]==c){C[l][2]+=val; found=l; break;}
                }
                if(found==-1){C[k][0]=r; C[k][1]=c; C[k][2]=val; k++;}
            }
        }
    }

    for(int i=0;i<k;i++) cout << C[i][0] << " " << C[i][1] << " " << C[i][2] << endl;
}