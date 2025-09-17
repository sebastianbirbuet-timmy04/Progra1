// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Carnet: 6963195 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 16/09/2025
// Número de ejercicio: 17

#include <iostream>
using namespace std;

int main()
{
	int n1, n2, d1 = 0, d2 = 0, i;
	cout << "Por favor, ingresa el valor del primer numero: ";
	cin >> n1;
	cout << "Ahora ingresa el valor del segundo numero: ";
	cin >> n2;
	
	for (i = 1; i < n1; i++)
	{
		if (n1 % i == 0)
		{
			d1 += i;
		}
	}
	
	for (i = 1; i < n2; i++)
	{
		if (n2 % i == 0)
		{
			d2 += i;
		}
	}
	
	if (d1 == n2 and d2 == n1)
	{ 
		cout << n1 << " y " << n2 << " son amigos.";
	}
	else
	{ 
		cout << n1 << " y " << n2 << " no son amigos.";
	}
	
	return 0;
}
