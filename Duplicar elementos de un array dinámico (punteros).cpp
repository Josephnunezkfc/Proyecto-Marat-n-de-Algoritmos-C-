#include <iostream>
using namespace std;
int main(){ int n; cin>>n; int* a=new int[n]; for(int i=0;i<n;i++) cin>>a[i]; int* b=new int[n]; for(int i=0;i<n;i++) b[i]=2*a[i]; for(int i=0;i<n;i++) cout<<b[i]<<" "; cout<<"\n"; delete[] a; delete[] b; }
