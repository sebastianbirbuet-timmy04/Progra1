// Materia: Programaci�n I, Paralelo 4
// Autor: Sebasti�n Salvador Birbuet
// Carnet: 6963195 L.P.
// Carrera del estudiante: Ingenier�a de Sistemas
// Fecha creaci�n: 17/09/2025
// N�mero de ejercicio: 20

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
