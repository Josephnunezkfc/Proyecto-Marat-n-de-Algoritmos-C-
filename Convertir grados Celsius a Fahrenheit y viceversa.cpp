#include <iostream>
using namespace std;

int main() {
    int opcion;
    double temp, resultado;

    cout << "Seleccione la conversión:\n";
    cout << "1. Celsius a Fahrenheit\n";
    cout << "2. Fahrenheit a Celsius\n";
    cout << "Opción: ";
    cin >> opcion;

    if (opcion != 1 && opcion != 2) {
        cout << "Opción inválida." << endl;
        return 1;
    }

    cout << "Ingrese la temperatura: ";
    cin >> temp;

    if (opcion == 1) {
        resultado = (temp * 9.0 / 5.0) + 32;
        cout << temp << "°C equivalen a " << resultado << "°F" << endl;
    } else {
        resultado = (temp - 32) * 5.0 / 9.0;
        cout << temp << "°F equivalen a " << resultado << "°C" << endl;
    }

    return 0;
}
