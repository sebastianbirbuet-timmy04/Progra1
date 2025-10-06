// Materia: Programación I, Paralelo 4
// Autor: Sebastian Salvador Birbuet
// Carnet: 6963195
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 05/10/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int vector1[SIZE], vector2[SIZE], vector3[SIZE];

    cout << "Por favor, ingresa 5 valores para vector1:\n";
    for (int i = 0; i < SIZE; ++i)
    {
        cin >> vector1[i];
    }

    cout << "Por favor, ingresa 5 valores para vector2:\n";
    for (int i = 0; i < SIZE; ++i)
    {
        cin >> vector2[i];
    }

    
    for (int i = 0; i < SIZE; ++i)
    {
        vector3[i] = vector1[i] + vector2[i];
    }

    cout << "vector3 = vector1 + vector2:\n";
    for (int i = 0; i < SIZE; ++i)
    {
        cout << vector3[i] << " ";
    }
    cout << endl;

    return 0;
}