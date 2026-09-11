#include <iostream>
using namespace std;

int main() {
    std::string name;
    std::cout << "Ingresa tu nombre: ";
    std::cin >> name;
    std::cout << "Hola, " << name << "!" << std::endl;

    int edad;
    std::cout << "Ingresa tu edad: ";
    std::cin >> edad;
    if (edad <= 0) {
        std::cout << "La edad ingresada no es válida." << std::endl;
        return 1;
    } else {
        std::cout << "Tienes " << edad << " años." << std::endl;
    }

    float calificacion1;
    std::cout << "Ingresa tu calificación 1: ";
    std::cin >> calificacion1;
    if (calificacion1 < 0 || calificacion1 > 10) {
        std::cout << "La calificación ingresada no es válida." << std::endl;
        return 1;
    } else {
        std::cout << "Tu calificación 1 es: " << calificacion1 << std::endl;
    }

    float calificacion2;
    std::cout << "Ingresa tu calificación 2: ";
    std::cin >> calificacion2;
    std::cout << "Tu calificación 2 es: " << calificacion2 << std::endl;

    float calificacion3;
    std::cout << "Ingresa tu calificación 3: ";
    std::cin >> calificacion3;
    std::cout << "Tu calificación 3 es: " << calificacion3 << std::endl;

    float promedio = (calificacion1 + calificacion2 + calificacion3) / 3;
    std::cout << "Tu promedio es: " << promedio << std::endl;
    return 0;
}