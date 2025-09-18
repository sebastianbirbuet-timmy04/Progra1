// Materia: Programaci�n I, Paralelo 4
// Autor: Sebasti�n Salvador Birbuet
// Fecha creaci�n: 17/09/2025
// N�mero de ejercicio: 2

#include <iostream>
#include <cmath>
using namespace std;

double calcularVolumen(double radio, double p)
{
	double vol, h, sqr;
	h = 10;
	sqr = pow(radio, 2);
	vol = p * sqr * h;
	
	return vol;
}

int main()
{
	double rad, pi, v;
	pi = 3.1416;
	cout << "Por favor, ingresa el radio: ";
	cin >> rad;
	v = calcularVolumen(rad, pi);
	cout << "El volumen es: " << v;
	
	return 0;
}
