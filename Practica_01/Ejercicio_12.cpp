// Materia: Programación I, Paralelo 4

// Autor: Sebastián Salvador Birbuet

// Carnet: 6963195 L.P.

// Carrera del estudiante: Ingeniería de Sistemas

// Fecha creación: 28/08/2025

// Número de ejercicio: 12
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
