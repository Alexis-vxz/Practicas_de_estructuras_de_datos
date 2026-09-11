#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Ingresa tu nombre: ";
    cin >> name;
    cout << "Hola, " << name << "!" << endl;

    int edad;
    cout << "Ingresa tu edad: ";
    cin >> edad;

    if (edad < 0 || edad > 120) {
        cout << "Edad invalida" << endl;
        return 1;
    } else {
        cout << "Tienes " << edad << " años." << endl;
    }

    float calificacion1, calificacion2, calificacion3;

   
    cout << "Ingresa tu calificación 1: ";
    cin >> calificacion1;
    if (calificacion1 < 0 || calificacion1 > 10) {
        cout << "La calificación ingresada no es válida." << endl;
        return 1;
    } else {
        cout << "Tu calificación 1 es: " << calificacion1 << endl;
    }

    
    cout << "Ingresa tu calificación 2: ";
    cin >> calificacion2;
    if (calificacion2 < 0 || calificacion2 > 10) {
        cout << "La calificación ingresada no es válida." << endl;
        return 1;
    } else {
        cout << "Tu calificación 2 es: " << calificacion2 << endl;
    }

    
    cout << "Ingresa tu calificación 3: ";
    cin >> calificacion3;
    if (calificacion3 < 0 || calificacion3 > 10) {
        cout << "La calificación ingresada no es válida." << endl;
        return 1;
    } else {
        cout << "Tu calificación 3 es: " << calificacion3 << endl;
    }

    
    float promedio = (calificacion1 + calificacion2 + calificacion3) / 3.0f;
    cout << "Tu promedio es: " << promedio << endl;

   
    if (promedio >= 9) {
        cout << "EXCELENTE" << endl;
    } else {
        if (promedio >= 7) {
            cout << "APROBADO" << endl;
        } else {
            if (promedio >= 6) {
                cout << "REGULAR (aprobado con lo minimo)" << endl;
            } else {
                cout << "REPROBADO" << endl;
            }
        }
    }

    return 0;
}