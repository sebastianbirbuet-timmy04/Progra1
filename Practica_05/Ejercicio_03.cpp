// Materia: Programación I, Paralelo 4
// Autor: Sebastian Salvador Birbuet
// Carnet: 6963195
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 02/10/2025
// Número de ejercicio: 3

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int numGrades;
    cout << "Por favor, ingresa el número de calificaciones (N): ";
    if (!(cin >> numGrades) || numGrades <= 0)
    {
        cout << "Entrada inválida. N debe ser un entero positivo.\n";
        return 1;
    }

    vector<int> calificaciones;
    calificaciones.reserve(numGrades);

    cout << "Ingrese " << numGrades << " calificaciones (enteros), separadas por espacio o nueva línea:\n";
    for (int i = 0; i < numGrades; ++i)
    {
        int grade;
        cin >> grade;
        calificaciones.push_back(grade);
    }

    int sum = 0; 
    for (int v : calificaciones)
    {
        sum += v;
    }
    double average = static_cast<double>(sum) / numGrades;

    
    vector<double> desviacion(numGrades);
    double sumDevSq = 0.0;
    for (int i = 0; i < numGrades; ++i)
    {
        desviacion[i] = calificaciones[i] - average;
        sumDevSq += desviacion[i] * desviacion[i];
    }

    double variance = sumDevSq / numGrades;

    cout << "\nResultados:\n";
    cout << "Suma total: " << sum << "\n";
    cout << "Promedio: " << average << "\n\n";

    cout << "Calificacion\tDesviacion\n";
    for (int i = 0; i < numGrades; ++i)
    {
        cout << calificaciones[i] << "\t\t" << desviacion[i] << "\n";
    }

    cout << "\nVarianza: " << variance << "\n";

    return 0;
}
