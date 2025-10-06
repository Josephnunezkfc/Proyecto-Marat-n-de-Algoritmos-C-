#include <iostream>
#define PI 3.1416

int main() {
    double radio, area;

    // 1. Solicitar al usuario que ingrese el radio
    std::cout << "Ingrese el radio del círculo: ";
    std::cin >> radio;

    // 2. Validar que el radio no sea negativo
    if (radio < 0) {
        std::cout << "Error: El radio no puede ser negativo." << std::endl;
        return 1;
    }

    // 3. Calcular el área
    area = PI * radio * radio;

    // 4. Mostrar el resultado
    std::cout << "El área del círculo es: " << area << std::endl;

    return 0;
}
