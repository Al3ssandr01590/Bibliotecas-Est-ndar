#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;
    char genero;

public:
    Persona(const string& n, int e, char g) : nombre(n), edad(e), genero(g) {}

    void imprimirInformacion() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Género: " << genero << endl;
    }
};

class Estudiante : public Persona {
private:
    int numeroEstudiante;
    float promedioCalificaciones;

public:
    Estudiante(const string& n, int e, char g, int numEst, float promCal) : Persona(n, e, g), numeroEstudiante(numEst), promedioCalificaciones(promCal) {}

    void setNumeroEstudiante(int numEst) {
        numeroEstudiante = numEst;
    }

    int getNumeroEstudiante() {
        return numeroEstudiante;
    }

    void setPromedioCalificaciones(float promCal) {
        promedioCalificaciones = promCal;
    }

    float getPromedioCalificaciones() {
        return promedioCalificaciones;
    }

    void imprimirInformacionEstudiante() {
        imprimirInformacion();
        cout << "Número de estudiante: " << numeroEstudiante << endl;
        cout << "Promedio de calificaciones: " << promedioCalificaciones << endl;
    }
};

int main() {
    string nombre;
    int edad;
    char genero;
    int numeroEstudiante;
    float promedioCalificaciones;

    cout << "Ingrese el nombre: ";
    getline(cin, nombre);

    cout << "Ingrese la edad: ";
    cin >> edad;

    cout << "Ingrese el género (M/F): ";
    cin >> genero;

    cout << "Ingrese el número de estudiante: ";
    cin >> numeroEstudiante;

    cout << "Ingrese el promedio de calificaciones: ";
    cin >> promedioCalificaciones;

    Estudiante estudiante(nombre, edad, genero, numeroEstudiante, promedioCalificaciones);

    cout << "Información del estudiante:" << endl;
    estudiante.imprimirInformacionEstudiante();

    return 0;
}
