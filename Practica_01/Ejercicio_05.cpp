// Materia: Programaci�n I, Paralelo 4

// Autor: Sebasti�n Salvador Birbuet

// Carnet: 6963195 L.P.

// Carrera del estudiante: Ingenier�a de Sistemas

// Fecha creaci�n: 23/08/2025

// N�mero de ejercicio: 5

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
