#include <iostream>
using namespace std;
void invertir(int* a, int n) {
    int *l=a, *r=a+n-1;
    while(l<r) { int t=*l; *l=*r; *r=t; l++; r--; }
}
int main() {
    int n; cin>>n; int* a=new int[n]; for(int i=0;i<n;i++) cin>>a[i];
    invertir(a,n);
    for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<"\n"; delete[] a; return 0;
}
