#include <iostream>
using namespace std;
int main(){
    int n; cin>>n; int* a=new int[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int sum=0;
    for(int* p=a; p<a+n; ++p) if((*p)%2==0) sum+=*p;
    cout<<sum<<"\n";
    delete[] a; return 0;
}
