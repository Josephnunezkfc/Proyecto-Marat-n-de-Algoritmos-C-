#include <iostream>
using namespace std;
void moverZeros(int* a,int n){ int j=0; for(int i=0;i<n;i++) if(a[i]!=0) a[j++]=a[i]; while(j<n) a[j++]=0; }
int main(){ int n; cin>>n; int* a=new int[n]; for(int i=0;i<n;i++) cin>>a[i]; moverZeros(a,n); for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<"\n"; delete[] a; }
