// Materia: Programaci�n I, Paralelo 4

// Autor: Sebasti�n Salvador Birbuet

// Carnet: 6963195 L.P.

// Carrera del estudiante: Ingenier�a de Sistemas

// Fecha creaci�n: 23/08/2025

// N�mero de ejercicio: 3

#include <iostream>
using namespace std;

int main()
{
	int base, height, area;
	cout << "Por favor, ingresa la base del triangulo: ";
	cin >> base;
	cout << "Ahora ingresa la altura: ";
	cin >> height;
	area = (base * height) / 2;
	
	cout << "El area del triangulo es de: ";
	cout << area;
	cout << " cm^2.";
	
	return 0;
}
