#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de números de Fibonacci a imprimir: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: el número debe ser positivo." << endl;
        return 1;
    }

    int a = 0, b = 1, c;

    cout << "Serie Fibonacci: ";

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    cout << endl;

    return 0;
}
