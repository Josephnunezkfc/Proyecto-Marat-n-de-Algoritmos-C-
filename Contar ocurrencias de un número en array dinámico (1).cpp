#include <iostream>
using namespace std;
int contar(int* a,int n,int v){ int c=0; for(int i=0;i<n;i++) if(a[i]==v) c++; return c; }
int main(){ int n; cin>>n; int* a=new int[n]; for(int i=0;i<n;i++) cin>>a[i]; int v; cin>>v; cout<<contar(a,n,v)<<"\n"; delete[] a; }
