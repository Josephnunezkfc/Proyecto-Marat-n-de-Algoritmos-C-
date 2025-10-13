#include <iostream>
using namespace std;
int main() {
    int a = 3, b = 4;
    int *pa = &a, *pb = &b;
    cout << "Valores iniciales: " << *pa << ", " << *pb << endl;
    *pa += *pb;
    cout << "Resultado: " << *pa << endl;
    return 0;
}