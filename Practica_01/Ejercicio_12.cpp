// Materia: Programaci�n I, Paralelo 4

// Autor: Sebasti�n Salvador Birbuet

// Carnet: 6963195 L.P.

// Carrera del estudiante: Ingenier�a de Sistemas

// Fecha creaci�n: 28/08/2025

// N�mero de ejercicio: 12
#include<iostream>
using namespace std;

int main()
{
	int number;
	cout << "Por favor, ingrese un numero entre 1 y 5: ";
	cin >> number;
	
	while (number < 1 or number > 5)
	{
		cout << "Error, ingrese un numero valido: ";
		cin >> number;
	}
	
	cout << "Entrada exitosa.";
	
	return 0;
}
