// Materia: Programación I, Paralelo 4

// Autor: Sebastián Salvador Birbuet

// Carnet: 6963195 L.P.

// Carrera del estudiante: Ingeniería de Sistemas

// Fecha creación: 28/08/2025

// Número de ejercicio: 15
#include <iostream>
using namespace std;

int main() 
{
    int n, counter = 1, score;
    float addition = 0, average;

    cout << "Por favor, ingresa la cantidad de notas: ";
    cin >> n;

    while (counter <= n) 
	{
        cout << "Ingresa la nota ";
		cout << counter;
		cout << ": ";
        cin >> score;
        addition += score;
        counter++;
    }

    average = addition / n;

    cout << "El promedio general del/la estudiante es: ";
	cout << average;

    return 0;
}

