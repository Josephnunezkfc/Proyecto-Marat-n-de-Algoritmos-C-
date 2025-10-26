#include <iostream>
using namespace std;
int buscar(int*a,int n,int v){ for(int i=0;i<n;i++) if(a[i]==v) return i; return -1; }
int main(){ int n; cin>>n; int*a=new int[n]; for(int i=0;i<n;i++) cin>>a[i]; int v; cin>>v; cout<<buscar(a,n,v)<<"
"; delete[] a; }
