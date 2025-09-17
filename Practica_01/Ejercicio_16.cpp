// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Carnet: 6963195 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 16/09/2025
// Número de ejercicio: 16

#include <iostream>
using namespace std;

int main()
{
	int num, prime, i;
	cout << "Por favor, ingresa un numero para verificar si es primo: ";
	cin >> num;
	prime = 0;
	
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			prime++;
		}
	}
	
	if (prime == 2)
	{
		cout << num << " es primo.";
	}
	else
	{
		cout << num << " no es primo.";
	}
	return 0;
}

