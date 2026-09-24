#include <iostream>
#include <string>
using namespace std;

int main() {
    int opcion;

    // --- Menu de opciones ---
    cout << "SISTEMA DE CALIFICACIONES:" << endl;
    cout << "1. Registrar estudiante" << endl;
    cout << "2. Ver informacion del programa" << endl;
    cout << "3. Salir" << endl;
    cout << "Selecciona una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1: { 
            cin.ignore(); 

            string name;
            cout << "Ingresa tu nombre: ";
            getline(cin, name);

            int edad;
            cout << "Ingresa tu edad: ";
            cin >> edad;

            while (edad <= 0 || edad > 120) {
                cout << "Edad invalidad, la edad debe de ser entre 1 y 120." << endl;
                cin >> edad;
            }
            cout << "Tienes " << edad << " anos." << endl;

            int totalCalificaciones;
            cout << "¿Cuantas calificaciones deseas registrar? ";
            cin >> totalCalificaciones;

            if (totalCalificaciones <= 0) {
                cout << "La cantidad debe ser mayor a 0." << endl;
                return 1;
            }

            float suma = 0;
            int aprobadas = 0;
            int reprobadas = 0;
            float calificacionAlta = -1.0f; 
            float calificacionBaja = 11.0f; 

            for (int i = 0; i < totalCalificaciones; i++) {
                float calificacion;
                cout << "Ingresa tu calificacion " << i + 1 << ": ";
                cin >> calificacion;

                while (calificacion < 0 || calificacion > 10) {
                    cout << "Calificacion invalida, debe ser entre 0 y 10." << endl;
                    cin >> calificacion;
                }
                suma += calificacion;

                    if (calificacion >= 6) {
                    aprobadas++;
                } else {
                    reprobadas++;
                }

                if (calificacion > calificacionAlta) {
                    calificacionAlta = calificacion;
                }
                if (calificacion < calificacionBaja) {
                    calificacionBaja = calificacion;
                }
            }

            float promedio = suma / totalCalificaciones;

            cout << "\n--- RESUMEN ---" << endl;
            cout << "Estudiante: " << name << " (" << edad << " anos)" << endl;
            cout << "Promedio final: " << promedio << endl;
            cout << "Calificacion mas alta: " << calificacionAlta << endl;
            cout << "Calificacion mas baja: " << calificacionBaja << endl;
            cout << "Calificaciones aprobatorias: " << aprobadas << endl;
            cout << "Calificaciones reprobatorias: " << reprobadas << endl;

            if (promedio >= 9) {
                cout << "Estatus: EXCELENTE" << endl;
            } else if (promedio >= 7) {
                cout << "Estatus: APROBADO" << endl;
            } else if (promedio >= 6) {
                cout << "Estatus: REGULAR (aprobado con lo minimo)" << endl;
            } else {
                cout << "Estatus: REPROBADO" << endl;
            }

            break; 
        } 

        case 2:
            cout << "\n--- INFORMACION DEL PROGRAMA ---" << endl;
            cout << "Sistema de Gestion y Promedio de Calificaciones Escolares." << endl;
            break;

        case 3:
            cout << "Saliendo del programa..." << endl;
            break;

        default:
            cout << "Opcion no valida." << endl;
            break;
    }

    return 0;
}
