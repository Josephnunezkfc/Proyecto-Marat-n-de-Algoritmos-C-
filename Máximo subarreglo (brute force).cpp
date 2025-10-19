#include <iostream>
using namespace std;
int main(){
    int n; cin>>n; int* a=new int[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int best=-1000000000;
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){ s+=a[j]; if(s>best) best=s; }
    }
    cout<<best<<"
"; delete[] a; return 0;
}
