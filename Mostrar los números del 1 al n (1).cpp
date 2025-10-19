#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    if (n <= 0) {
        cout << "Número inválido." << endl;
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
