#include <iostream>
using namespace std;
int* clonar(int* a,int n){ int* b=new int[n]; for(int i=0;i<n;i++) b[i]=a[i]; return b; }
int main(){ int n; cin>>n; int* a=new int[n]; for(int i=0;i<n;i++) cin>>a[i]; int* b=clonar(a,n); for(int i=0;i<n;i++) cout<<b[i]<<" "; cout<<"\n"; delete[] a; delete[] b; }
