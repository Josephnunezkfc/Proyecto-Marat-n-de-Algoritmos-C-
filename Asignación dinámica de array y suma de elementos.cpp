#include <iostream>
using namespace std;
int main() {
    int n; cout<<"n: "; cin>>n;
    int* a = new int[n];
    for(int i=0;i<n;i++) cin>>a[i];
    long long sum=0; for(int i=0;i<n;i++) sum+=a[i];
    cout<<"Suma: "<<sum<<"\n";
    delete[] a; return 0;
}
