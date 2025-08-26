// Materia: Programación I, Paralelo 4

// Autor: Sebastián Salvador Birbuet

// Carnet: 6963195 L.P.

// Carrera del estudiante: Ingeniería de Sistemas

// Fecha creación: 23/08/2025

// Número de ejercicio: 10

#include <iostream>
using namespace std;

int main()
{
	int score;
	cout << "Por favor, introduce tu nota: ";
	cin >> score;
	
	if (score >= 0 and score <= 100)
	{
		if (score >= 51 and score < 60)
		{
			cout << "Calificacion = C.";
		}
		else
		{
			if (score >= 60 and score < 70)
			{
				cout << "Calificacion = C+.";
			}
			else
			{
				if (score >= 70 and score < 80)
				{
					cout << "Calificacion = B.";
				}
				else
				{
					if (score >= 80 and score < 90)
					{
						cout << "Calificacion = B+.";
					}
					else
					{
						if (score >= 90 and score < 100)
						{
							cout << "Calificacion = A.";
						}
						else
						{
							if (score == 100)
							{
								cout << "Calificacion = A+.";
							}
							else
							{ 
								cout << "Reprobado.";
							}
						}
					}
				}
			}
		}
	}
	else
	{
		cout << "Ingreso invalido.";
	}
	
	return 0;
}

