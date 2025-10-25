#include <iostream>
using namespace std;
int buscar_ptr(int* a,int n,int v){ for(int* p=a;p<a+n;p++) if(*p==v) return p-a; return -1; }
int main(){ int n; cin>>n; int* a=new int[n]; for(int i=0;i<n;i++) cin>>a[i]; int v; cin>>v; cout<<buscar_ptr(a,n,v)<<"
"; delete[] a; }
