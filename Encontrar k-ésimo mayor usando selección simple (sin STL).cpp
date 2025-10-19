#include <iostream>
#include <limits>
using namespace std;
int kthMax(int* a,int n,int k){ for(int it=0;it<k-1;it++){ int idx=0; for(int i=1;i<n-it;i++) if(a[i]>a[idx]) idx=i; swap(a[idx],a[n-it-1]); } int idx=0; for(int i=1;i<n-(k-1);i++) if(a[i]>a[idx]) idx=i; return a[idx]; }
int main(){ int n,k; cin>>n; int* a=new int[n]; for(int i=0;i<n;i++) cin>>a[i]; cin>>k; cout<<kthMax(a,n,k)<<"\n"; delete[] a; }
