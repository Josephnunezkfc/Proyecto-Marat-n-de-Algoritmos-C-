#include <iostream>
using namespace std;

int main() {
    double metros, centimetros;

    cout << "Ingrese la longitud en metros: ";
    cin >> metros;

    centimetros = metros * 100;

    cout << metros << " metros equivalen a " << centimetros << " centímetros." << endl;

    return 0;
}
