#include <iostream>
using namespace std;
int main(){ int* a=new int[10]; for(int i=0;i<10;i++) a[i]=i; // uso
    // liberar memoria
    delete[] a;
    cout<<"Memoria liberada\n"; return 0;
}
