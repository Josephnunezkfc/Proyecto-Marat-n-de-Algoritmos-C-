#include <iostream>
using namespace std;

int main() {
    int n;
    double suma = 0.0, num;

    cout << "¿Cuántos números desea ingresar? ";
    cin >> n;

    if (n <= 0) {
        cout << "Número inválido." << endl;
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        cout << "Ingrese el número " << (i + 1) << ": ";
        cin >> num;
        suma += num;
    }

    cout << "La media aritmética es: " << (suma / n) << endl;

    return 0;
}


