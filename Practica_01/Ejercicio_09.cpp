// Materia: Programación I, Paralelo 4

// Autor: Sebastián Salvador Birbuet

// Carnet: 6963195 L.P.

// Carrera del estudiante: Ingeniería de Sistemas

// Fecha creación: 23/08/2025

// Número de ejercicio: 9

#include <iostream>
using namespace std;

int main()
{
	int age;
	cout << "Por favor, introduce la edad: ";
	cin >> age;
	
	if (age >= 0 and age <= 122) //122 es el limite de edad considerando que la persona mas longeva de la historia vivio esa cantidad de años.
	{
		if (age <= 12)
		{
			cout << "Nino.";
		}
		else
		{
			if (age > 12 and age < 18)
			{
				cout << "Adolescente.";
			}
			else
			{
				if (age >= 18 and age < 65)
				{
					cout << "Adulto.";
				}
				else
				{
					cout << "Adulto mayor.";
				}
			}
		}
	}
	else
	{
		cout << "Error, ingreso invalido.";
	}

	return 0;
}


