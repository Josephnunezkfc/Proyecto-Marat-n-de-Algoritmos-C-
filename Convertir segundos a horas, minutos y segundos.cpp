#include <iostream>
using namespace std;

int main() {
    int totalSegundos, horas, minutos, segundos, residuo;

    cout << "Ingrese la cantidad de segundos: ";
    cin >> totalSegundos;

    horas = totalSegundos / 3600;
    residuo = totalSegundos % 3600;

    minutos = residuo / 60;
    segundos = residuo % 60;

    cout << totalSegundos << " segundos equivalen a " << horas << " horas, "
         << minutos << " minutos y " << segundos << " segundos." << endl;

    return 0;
}