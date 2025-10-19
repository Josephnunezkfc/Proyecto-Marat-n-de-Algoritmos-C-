#include <iostream>
using namespace std;
int quitarDup(int*a,int n){ if(n==0) return 0; int j=1; for(int i=1;i<n;i++) if(a[i]!=a[i-1]) a[j++]=a[i]; return j; }
int main(){ int n; cin>>n; int*a=new int[n]; for(int i=0;i<n;i++) cin>>a[i]; int m=quitarDup(a,n); for(int i=0;i<m;i++) cout<<a[i]<<" "; cout<<"
"; delete[] a; }
