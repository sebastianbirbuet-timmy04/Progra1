// Materia: Programaci�n I, Paralelo 4

// Autor: Sebasti�n Salvador Birbuet

// Carnet: 6963195 L.P.

// Carrera del estudiante: Ingenier�a de Sistemas

// Fecha creaci�n: 28/08/2025

// N�mero de ejercicio: 13
#include <iostream>
using namespace std;

int main() 
{
    int n, addition = 0;

    cout << "Por favor, ingresa un valor para n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) 
	{
        addition += i;
    }

    cout << "La suma de los numeros del 1 al ";
	cout << n;
	cout << " es igual a: ";
	cout << addition;

    return 0;
}

