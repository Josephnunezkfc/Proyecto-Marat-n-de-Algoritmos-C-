#include <iostream>
using namespace std;

int main() {
    double lado1, lado2, lado3, perimetro;

    cout << "Ingrese el primer lado del triángulo: ";
    cin >> lado1;
    cout << "Ingrese el segundo lado del triángulo: ";
    cin >> lado2;
    cout << "Ingrese el tercer lado del triángulo: ";
    cin >> lado3;

    perimetro = lado1 + lado2 + lado3;

    cout << "El perímetro del triángulo es: " << perimetro << endl;

    return 0;
}
