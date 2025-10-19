#include <iostream>
using namespace std;
class Estadistica{ public: static double promedio(int* a,int n){ double s=0; for(int i=0;i<n;i++) s+=a[i]; return n? s/n:0; } };
int main(){ int n; cin>>n; int* a=new int[n]; for(int i=0;i<n;i++) cin>>a[i]; cout<<Estadistica::promedio(a,n)<<"\n"; delete[] a; }
