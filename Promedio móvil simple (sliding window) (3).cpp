#include <iostream>
using namespace std;
int main(){ int n,k; cin>>n>>k; int*a=new int[n]; for(int i=0;i<n;i++) cin>>a[i]; for(int i=0;i+k<=n;i++){ int s=0; for(int j=0;j<k;j++) s+=a[i+j]; cout<< (double)s/k <<" "; } cout<<"
"; delete[] a; }
