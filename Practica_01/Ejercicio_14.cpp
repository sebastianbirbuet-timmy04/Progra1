// Materia: Programación I, Paralelo 4

// Autor: Sebastián Salvador Birbuet

// Carnet: 6963195 L.P.

// Carrera del estudiante: Ingeniería de Sistemas

// Fecha creación: 28/08/2025

// Número de ejercicio: 14
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

