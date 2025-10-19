#include <iostream>

int main() {
    float celsius, fahrenheit;

    // 1. Solicitar al usuario que introduzca los grados Celsius
    std::cout << "Ingrese la temperatura en grados Celsius: ";
    std::cin >> celsius;

    // 2. Aplicar la fórmula de conversión
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // 3. Mostrar el resultado
    std::cout << "La temperatura en grados Fahrenheit es: " << fahrenheit << " °F" << std::endl;

    return 0;
}


