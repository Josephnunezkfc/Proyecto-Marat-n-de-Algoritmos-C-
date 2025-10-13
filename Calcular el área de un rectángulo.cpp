#include <iostream>
using namespace std;

int main() {
    double base, altura, area;

    cout << "Ingrese la base del rectángulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectángulo: ";
    cin >> altura;

    area = base * altura;

    cout << "El área del rectángulo es: " << area << endl;

    return 0;
}