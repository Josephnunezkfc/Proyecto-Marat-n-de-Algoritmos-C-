
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese tamaño del arreglo: ";
    cin >> n;

    if (n <= 0) {
        cout << "Tamaño inválido." << endl;
        return 1;
    }

    int arr[n];

    for (int i = 0; i < n; ++i) {
        cout << "Ingrese elemento " << i+1 << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < n / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    cout << "Arreglo invertido: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
