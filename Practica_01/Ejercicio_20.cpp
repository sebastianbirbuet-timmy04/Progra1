// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Carnet: 6963195 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 17/09/2025
// Número de ejercicio: 20

#include <iostream>
using namespace std;

int main()
{
	int num, digit = 0;
	cout << "Ingresa un numero para dar sus digitos:";
	
	if (num == 0)
	{
		digit = 1;
	}
	
	else
	{
		if (num < 0)
		{
			num *= (-1);
		}
		while (num > 0)
		{
			num = num / 10;
			digit++;
		}
	}
	cout << "El numero ingresado tiene " << digit << " digito/s.";
	
	return 0;
	
}
