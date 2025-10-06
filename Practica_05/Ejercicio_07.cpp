// Materia: Programación I, Paralelo 4
// Autor: Sebastian Salvador Birbuet
// Carnet: 6963195
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 05/10/2025
// Número de ejercicio: 7
#include <iostream>
using namespace std;

int main() 
{
    const int SIZE = 10;
    int vec[SIZE];
    int count = 0;

    cout << "Por favor, ingresa hasta 10 numeros enteros (negativo para terminar):\n";
    for (int i = 0; i < SIZE; ++i) 
    {
        int num;
        cout << "Numero " << (i + 1) << ": ";
        cin >> num;
        if (num < 0) break;
        vec[count++] = num;
    }

    cout << "Elementos introducidos:\n";
    for (int i = 0; i < count; ++i) 
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}