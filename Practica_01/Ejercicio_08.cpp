// Materia: Programación I, Paralelo 4

// Autor: Sebastián Salvador Birbuet

// Carnet: 6963195 L.P.

// Carrera del estudiante: Ingeniería de Sistemas

// Fecha creación: 23/08/2025

// Número de ejercicio: 8

#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Por favor, ingresa un numero entero: ";
	cin >> number;
	
	if (number % 2 == 0)
	{
		cout << number;
		cout << " es par.";
	}
	else
	{
		cout << number;
		cout << " es impar.";
	}
	
	return 0;
}

