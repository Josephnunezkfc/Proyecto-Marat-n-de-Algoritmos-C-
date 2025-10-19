#include <iostream>
using namespace std;
long long invertirRec(long long n, long long res=0){
    if(n==0) return res;
    res = res*10 + (n%10);
    return invertirRec(n/10, res);
}
int main(){ long long n; cin>>n; cout<<invertirRec(n)<<"\n"; }
