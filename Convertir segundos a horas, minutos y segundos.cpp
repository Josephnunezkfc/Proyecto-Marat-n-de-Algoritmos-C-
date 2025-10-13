#include <iostream>
using namespace std;

int main() {
    char letra;

    cout << "Ingrese un carácter: ";
    cin >> letra;

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        cout << letra << " es una vocal." << endl;
    } else {
        cout << letra << " no es una vocal." << endl;
    }

    return 0;
}
