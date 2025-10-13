#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    if (n <= 0) {
        cout << "Número inválido." << endl;
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        suma += i;
    }

    cout << "La suma de los primeros " << n << " números naturales es: " << suma << endl;

    return 0;
}
