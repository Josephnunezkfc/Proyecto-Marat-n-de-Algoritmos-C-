#include <iostream>
using namespace std;

double promedio(int arr[], int n) {
    int suma = 0;
    for(int i = 0; i < n; i++) {
        suma += arr[i];
    }
    return (double)suma / n;
}

int main() {
    int n;

    cout << "Ingrese la cantidad de números: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: cantidad inválida." << endl;
        return 1;
    }

    int arr[n];

    cout << "Ingrese los números: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "El promedio es: " << promedio(arr, n) << endl;

    return 0;
}
