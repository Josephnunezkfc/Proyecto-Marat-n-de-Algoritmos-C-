#include <iostream>
using namespace std;
long long powRec(long long a,int b){ if(b==0) return 1; return a*powRec(a,b-1); }
int main(){ long long a; int b; cin>>a>>b; cout<<powRec(a,b)<<"\n"; }
