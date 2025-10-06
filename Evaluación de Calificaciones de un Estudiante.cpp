#include <iostream> // Incluye la biblioteca estándar de entrada y salida

int main() { // Función principal del programa
    double calificacion; // Variable para almacenar la calificación ingresada por el usuario

    // Bucle do-while para asegurar una entrada válida entre 0 y 10
    do {
        std::cout << "Ingrese la calificación del estudiante (de 0 a 10): ";
        std::cin >> calificacion;

        // Mensaje de error si la calificación no está en el rango válido
        if (calificacion < 0 || calificacion > 10) {
            std::cout << "Calificación no válida. Por favor, ingrese un valor entre 0 y 10." << std::endl;
        }
    } while (calificacion < 0 || calificacion > 10); // Repite hasta que la entrada sea válida

    // Evaluación de la calificación usando condicionales
    if (calificacion >= 7.0 && calificacion <= 10.0) {
        std::cout << "El estudiante APROBÓ la asignatura. ¡Felicidades! 🎉" << std::endl;
    } else if (calificacion >= 4.0 && calificacion < 7.0) {
        std::cout << "El estudiante se encuentra en SUPLETORIO. Esfuérzate por el siguiente examen. 📚" << std::endl;
    } else {
        std::cout << "El estudiante REPROBÓ la asignatura. A seguir intentando. 😔" << std::endl;
    }

    return 0; // Fin del programa
}

