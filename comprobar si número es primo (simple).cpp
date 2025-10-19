#include <iostream>
using namespace std;
bool isPrimeRec(int n,int i=2){
    if(n<2) return false;
    if(i*i>n) return true;
    if(n%i==0) return false;
    return isPrimeRec(n,i+1);
}
int main(){ int n; cin>>n; cout<<(isPrimeRec(n)?"PRIMO":"NO")<<"\n"; }
