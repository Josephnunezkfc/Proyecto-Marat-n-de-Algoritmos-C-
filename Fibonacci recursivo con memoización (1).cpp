#include <iostream>
#include <vector>
using namespace std;
long long fibMemo(int n, vector<long long>& mem){ if(n<=1) return n; if(mem[n]!=-1) return mem[n]; return mem[n]=fibMemo(n-1,mem)+fibMemo(n-2,mem); }
int main(){ int n; cin>>n; vector<long long> mem(n+1,-1); cout<<fibMemo(n,mem)<<"
"; }
