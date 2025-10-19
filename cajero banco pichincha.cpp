#include <iostream>
using namespace std;

int main() {
    double saldo = 1000.0, retiro;
    int opcion;

    cout << "Bienvenido al Cajero Automático" << endl;
    cout << "1. Consultar saldo" << endl;
    cout << "2. Retirar dinero" << endl;
    cout << "Ingrese una opción: ";
    cin >> opcion;

    if (opcion == 1) {
        cout << "Su saldo es: $" << saldo << endl;
    } else if (opcion == 2) {
        cout << "Ingrese monto a retirar: ";
        cin >> retiro;
        if (retiro > saldo) {
            cout << "Fondos insuficientes." << endl;
        } else {
            saldo -= retiro;
            cout << "Retiro exitoso. Saldo actual: $" << saldo << endl;
        }
    } else {
        cout << "Opción inválida." << endl;
    }

    return 0;
}

