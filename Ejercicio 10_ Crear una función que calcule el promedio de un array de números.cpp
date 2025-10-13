#include <iostream>
#include <vector> // 1. Incluimos la biblioteca para usar vector
using namespace std;

// La función de promedio no necesita cambios, funciona igual
double promedio(int arr[], int n) {
    long long suma = 0; // Usamos long long por si la suma es muy grande
    for(int i = 0; i < n; i++) {
        suma += arr[i];
    }
    return static_cast<double>(suma) / n; // static_cast es más moderno que (double)
}

int main() {
    int n;

    cout << "Ingrese la cantidad de números: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: cantidad inválida." << endl;
        return 1;
    }

    // 2. Cambiamos el array antiguo por un vector
    vector<int> arr(n);

    cout << "Ingrese los números: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Se sigue usando igual que un array normal
    }

    // El vector se puede pasar a la función sin problemas
    cout << "El promedio es: " << promedio(arr.data(), n) << endl; 
    // Nota: Usamos arr.data() para pasar el puntero al inicio de los datos

    return 0;
}