#include <iostream>
using namespace std;
int sumaRec(int* a,int n){ if(n<=0) return 0; return a[n-1]+sumaRec(a,n-1); }
int main(){ int n; cin>>n; int* a=new int[n]; for(int i=0;i<n;i++) cin>>a[i]; cout<<sumaRec(a,n)<<"
"; delete[] a; }


