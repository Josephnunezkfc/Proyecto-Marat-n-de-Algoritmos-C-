#include <iostream>
using namespace std;
int main(){
    int r=2,c=2;
    int* A = new int[r*c];
    int* B = new int[r*c];
    for(int i=0;i<r*c;i++) cin>>A[i];
    for(int i=0;i<r*c;i++) cin>>B[i];
    int* C = new int[r*c];
    for(int i=0;i<r*c;i++) C[i]=A[i]+B[i];
    for(int i=0;i<r*c;i++){ cout<<C[i]<<( (i%2==1) ? '\n' : ' ' ); }
    delete[] A; delete[] B; delete[] C;
    return 0;
}
