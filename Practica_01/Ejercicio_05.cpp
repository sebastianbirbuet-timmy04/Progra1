// Materia: Programación I, Paralelo 4

// Autor: Sebastián Salvador Birbuet

// Carnet: 6963195 L.P.

// Carrera del estudiante: Ingeniería de Sistemas

// Fecha creación: 23/08/2025

// Número de ejercicio: 5

#include <iostream>
using namespace std;

int main()
{
	float celsius, kelvin;
	cout << "Por favor, ingresa la temperatura en grados celsius: ";
	cin >> celsius;
	kelvin = celsius + 273.15;
	
	cout << "La temperatura en Kelvin es: ";
	cout << kelvin;
	cout << " K.";
	
	return 0;
}
