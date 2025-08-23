// Materia: Programación I, Paralelo 4

// Autor: Sebastián Salvador Birbuet

// Carnet: 6963195 L.P.

// Carrera del estudiante: Ingeniería de Sistemas

// Fecha creación: 23/08/2025

// Número de ejercicio: 4

#include <iostream>
using namespace std;

int main()
{
	float volume, frac, pi, radius, cube; //El float nos permite ingresar y operar con decimales.
	frac = 1.33; //Conversion decimal de 4/3.
	pi = 3.1416; //Valor numerico de Pi.
	cout << "Por favor, ingresa el radio de la esfera: ";
	cin >> radius;
	cube = (radius*radius)*radius; //Cubo del radio.
	volume = frac*pi*cube; //Calculo del volumen de la esfera.
	
	cout << "El volumen de la esfera es de: ";
	cout << volume;
	cout << " cm^3.";
	
	
	return 0;
}
