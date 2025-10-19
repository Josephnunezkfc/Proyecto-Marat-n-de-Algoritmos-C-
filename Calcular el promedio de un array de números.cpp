#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    if (n <= 0) {
        cout << "Tamaño inválido." << endl;
        return 1;
    }

    double numeros[n], suma = 0;

    for (int i = 0; i < n; ++i) {
        cout << "Ingrese número " << i+1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    double promedio = suma / n;

    cout << "El promedio es: " << promedio << endl;

    return 0;
}
