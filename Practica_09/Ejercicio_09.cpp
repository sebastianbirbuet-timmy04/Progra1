// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 03/10/2025
// Número de ejercicio: 9

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Alumno 
{
    string nombre;
    float T1;
    float T2;
    float T3;
    float T4;
    float EF;
    float NP;
    float NF;
};

int main() 
{
    int n;

    cout << "=== CALIFICACIONES DEL CURSO ===" << endl;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> n;
    cin.ignore();

    if (n <= 0) 
    {
        cout << "No se ingresaron alumnos." << endl;
        return 0;
    }

    vector<Alumno> student(n);

    for (int i = 0; i < n; i++) 
    {
        cout << "\n--- Alumno " << i + 1 << " ---" << endl;

        cout << "Nombre: ";
        getline(cin, student[i].nombre);

        cout << "T1: ";
        cin >> student[i].T1;

        cout << "T2: ";
        cin >> student[i].T2;

        cout << "T3: ";
        cin >> student[i].T3;

        cout << "T4: ";
        cin >> student[i].T4;

        cout << "Examen Final (EF): ";
        cin >> student[i].EF;
        cin.ignore();

        student[i].NP = (student[i].T1 + student[i].T2 + student[i].T3 + student[i].T4) / 4;
        student[i].NF = 0.7 * student[i].NP + 0.3 * student[i].EF;
    }

    float suma = 0;
    float minNF = student[0].NF;
    float maxNF = student[0].NF;

    for (int i = 0; i < n; i++) 
    {
        suma += student[i].NF;
        if (student[i].NF < minNF) minNF = student[i].NF;
        if (student[i].NF > maxNF) maxNF = student[i].NF;
    }

    float promedio = suma / n;

    cout << "\n=== NOTAS FINALES ===" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << student[i].nombre << ": " << student[i].NF << endl;
    }

    cout << "\nPromedio de notas finales: " << promedio << endl;
    cout << "Nota mínima: " << minNF << endl;
    cout << "Nota máxima: " << maxNF << endl;

    return 0;
}
