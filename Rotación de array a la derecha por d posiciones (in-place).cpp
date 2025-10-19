#include <iostream>
using namespace std;
void rev(int*a,int l,int r){ while(l<r){ int t=a[l]; a[l]=a[r]; a[r]=t; l++; r--; } }
int main(){ int n,d; cin>>n>>d; int*a=new int[n]; for(int i=0;i<n;i++) cin>>a[i]; d%=n; rev(a,0,n-1); rev(a,0,d-1); rev(a,d,n-1); for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<"
"; delete[] a; }
