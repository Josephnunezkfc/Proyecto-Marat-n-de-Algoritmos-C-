#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double cateto1, cateto2, hipotenusa;

    cout << "Ingrese el primer cateto: ";
    cin >> cateto1;
    cout << "Ingrese el segundo cateto: ";
    cin >> cateto2;

    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    cout << "La hipotenusa es: " << hipotenusa << endl;

    return 0;
}

