#include <iostream>
#include <string>
using namespace std;

// Prototipos
void mostrarMenu();
int leerEntero(string mensaje, int min, int max);
float leerCalificacion(int numero);
float calcularPromedio(float suma, int n);
string obtenerEstado(float promedio);
void registrarEstudiante();
void mostrarInformacion();

int main() {
    int opcion;
    do {
        mostrarMenu();
        opcion = leerEntero("Selecciona una opcion: ", 1, 3);

        switch(opcion) {
            case 1:
                registrarEstudiante();
                break;
            case 2:
                mostrarInformacion();
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
        }
    } while(opcion != 3);

    return 0;
}

// Definiciones
void mostrarMenu() {
    cout << "\nSISTEMA DE CALIFICACIONES:" << endl;
    cout << "1. Registrar estudiante" << endl;
    cout << "2. Ver informacion del programa" << endl;
    cout << "3. Salir" << endl;
}

int leerEntero(string mensaje, int min, int max) {
    int valor;
    do {
        cout << mensaje;
        cin >> valor;
        if(valor < min || valor > max) {
            cout << "Valor invalido. Intenta de nuevo.\n";
        }
    } while(valor < min || valor > max);
    return valor;
}

float leerCalificacion(int numero) {
    float cal;
    do {
        cout << "Ingresa tu calificacion " << numero << " (0-10): ";
        cin >> cal;
        if(cal < 0 || cal > 10) {
            cout << "Calificacion invalida. Intenta de nuevo.\n";
        }
    } while(cal < 0 || cal > 10);
    return cal;
}

float calcularPromedio(float suma, int n) {
    return suma / n;
}

string obtenerEstado(float promedio) {
    if (promedio >= 9) return "EXCELENTE";
    else if (promedio >= 7) return "APROBADO";
    else if (promedio >= 6) return "REGULAR (aprobado con lo minimo)";
    else return "REPROBADO";
}

void registrarEstudiante() {
    cin.ignore();
    string name;
    cout << "Ingresa tu nombre: ";
    getline(cin, name);

    int edad = leerEntero("Ingresa tu edad (1-120): ", 1, 120);
    cout << "Tienes " << edad << " anos." << endl;

    int totalCalificaciones = leerEntero("¿Cuantas calificaciones deseas registrar? ", 1, 20);

    float suma = 0;
    int aprobadas = 0, reprobadas = 0;
    float calificacionAlta = -1.0f, calificacionBaja = 11.0f;

    for(int i = 1; i <= totalCalificaciones; i++) {
        float calificacion = leerCalificacion(i);
        suma += calificacion;

        if(calificacion >= 6) aprobadas++;
        else reprobadas++;

        if(calificacion > calificacionAlta) calificacionAlta = calificacion;
        if(calificacion < calificacionBaja) calificacionBaja = calificacion;
    }

    float promedio = calcularPromedio(suma, totalCalificaciones);
    string estado = obtenerEstado(promedio);

    cout << "\n--- RESUMEN ---" << endl;
    cout << "Estudiante: " << name << " (" << edad << " anos)" << endl;
    cout << "Promedio final: " << promedio << endl;
    cout << "Calificacion mas alta: " << calificacionAlta << endl;
    cout << "Calificacion mas baja: " << calificacionBaja << endl;
    cout << "Calificaciones aprobatorias: " << aprobadas << endl;
    cout << "Calificaciones reprobatorias: " << reprobadas << endl;
    cout << "Estatus: " << estado << endl;
}

void mostrarInformacion() {
    cout << "\n--- INFORMACION DEL PROGRAMA ---" << endl;
    cout << "Sistema de Gestion y Promedio de Calificaciones Escolares." << endl;
}
