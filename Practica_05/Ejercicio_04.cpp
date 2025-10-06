// Materia: Programación I, Paralelo 4
// Autor: Sebastian Salvador Birbuet
// Carnet: 6963195
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 04/10/2025
// Número de ejercicio: 4

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cout << "Por favor, ingresa la dimensión N de los vectores: ";
    cin >> N;

    vector<int> vec1(N), vec2(N), resultado(N);

    cout << "Ingrese los elementos del primer vector:\n";
    for (int i = 0; i < N; ++i)
    {
        cin >> vec1[i];
    }

    cout << "Ingrese los elementos del segundo vector:\n";
    for (int i = 0; i < N; ++i)
    {
        cin >> vec2[i];
    }

    for (int i = 0; i < N; ++i)
    {
        resultado[i] = vec1[i] * vec2[i];
    }

    cout << "Vector resultado (multiplicación elemento a elemento):\n";
    for (int i = 0; i < N; ++i)
    {
        cout << resultado[i] << " ";
    }
    cout << endl;

    return 0;
}