// Materia: Programaci�n I, Paralelo 4

// Autor: Sebasti�n Salvador Birbuet

// Carnet: 6963195 L.P.

// Carrera del estudiante: Ingenier�a de Sistemas

// Fecha creaci�n: 28/08/2025

// N�mero de ejercicio: 14
#include <iostream>
using namespace std;
int main() 
{
    int n;

    cout << "Por favor, ingresa el valor de n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) 
	{
        for (int j = 1; j <= i; j++) 
		{
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

