#include <iostream>
using namespace std;
int main() {
    int a,b; cin>>a>>b;
    int *pa=&a,*pb=&b;
    *pa = *pa + *pb; *pb = *pa - *pb; *pa = *pa - *pb;
    cout<<a<<" "<<b<<"\n"; return 0;
}

