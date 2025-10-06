// Materia: Programación I, Paralelo 4
// Autor: Sebastian Salvador Birbuet
// Carnet: 6963195
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 04/10/2025
// Número de ejercicio: 5

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Ingrese la dimension N: ";
    cin >> n;

    vector<int> vector1(n), vector2(n), combined;

    cout << "Ingrese los elementos del primer vector:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> vector1[i];
    }

    cout << "Ingrese los elementos del segundo vector:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> vector2[i];
    }

    for (int i = 0; i < n; ++i)
    {
        combined.push_back(vector1[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        combined.push_back(vector2[i]);
    }

    cout << "Vector combinado:\n";
    for (int x : combined)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
