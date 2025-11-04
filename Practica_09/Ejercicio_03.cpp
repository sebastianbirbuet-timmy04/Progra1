// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 28/10/2025
// Número de ejercicio: 3

#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct Estudiante 
{
    int cedula;
    string nombre;
    string apellido;
    int edad;
    string profesion;
    string lugar_nacimiento;
    string direccion;
    int telefono;
};

int main() 
{
    int n;

    cout << "=== REGISTRO DE ESTUDIANTES DE PROGRAMACIÓN I ===" << endl;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;
    cin.ignore(); 

    if (n <= 0) 
    {
        cout << "No se registraron estudiantes." << endl;
        return 0;
    }

    vector<Estudiante> estudiantes(n);

    
    for (int i = 0; i < n; i++) 
    {
        cout << "\n--- Estudiante " << i + 1 << " ---" << endl;

        cout << "Cédula: ";
        cin >> estudiantes[i].cedula;
        cin.ignore();

        cout << "Nombre: ";
        getline(cin, estudiantes[i].nombre);

        cout << "Apellido: ";
        getline(cin, estudiantes[i].apellido);

        cout << "Edad: ";
        cin >> estudiantes[i].edad;
        cin.ignore();

        cout << "Profesión: ";
        getline(cin, estudiantes[i].profesion);

        cout << "Lugar de nacimiento: ";
        getline(cin, estudiantes[i].lugar_nacimiento);

        cout << "Dirección: ";
        getline(cin, estudiantes[i].direccion);

        cout << "Teléfono: ";
        cin >> estudiantes[i].telefono;
        cin.ignore();
    }

    
    cout << "\n=== LISTA DE ESTUDIANTES REGISTRADOS ===" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "\nEstudiante " << i + 1 << ":" << endl;
        cout << "Cédula: " << estudiantes[i].cedula << endl;
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Apellido: " << estudiantes[i].apellido << endl;
        cout << "Edad: " << estudiantes[i].edad << endl;
        cout << "Profesión: " << estudiantes[i].profesion << endl;
        cout << "Lugar de nacimiento: " << estudiantes[i].lugar_nacimiento << endl;
        cout << "Dirección: " << estudiantes[i].direccion << endl;
        cout << "Teléfono: " << estudiantes[i].telefono << endl;
    }

    return 0;
}
