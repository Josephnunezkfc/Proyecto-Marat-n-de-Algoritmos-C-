#include <iostream>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    int* A=new int[n]; int* B=new int[m];
    for(int i=0;i<n;i++) cin>>A[i];
    for(int j=0;j<m;j++) cin>>B[j];
    int* C=new int[n+m]; int i=0,j=0,k=0;
    while(i<n && j<m) C[k++]=(A[i]<=B[j]?A[i++]:B[j++]);
    while(i<n) C[k++]=A[i++];
    while(j<m) C[k++]=B[j++];
    for(int t=0;t<k;t++) cout<<C[t]<<" "; cout<<"
";
    delete[] A; delete[] B; delete[] C;
    return 0;
}

