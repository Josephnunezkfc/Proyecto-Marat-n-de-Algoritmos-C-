#include <iostream>
using namespace std;
void intercambiar(int *x, int *y) {
    int temp = *x; *x = *y; *y = temp;
}
int main() {
    int a,b; cout<<"Ingrese a y b: "; cin>>a>>b;
    cout<<"Antes: a="<<a<<", b="<<b<<"\n";
    intercambiar(&a,&b);
    cout<<"Después: a="<<a<<", b="<<b<<"\n";
    return 0;
}
