// Materia: Programaci�n I, Paralelo 4
// Autor: Sebasti�n Salvador Birbuet
// Carnet: 6963195 L.P.
// Carrera del estudiante: Ingenier�a de Sistemas
// Fecha creaci�n: 17/09/2025
// N�mero de ejercicio: 21

#include <iostream>
using namespace std;

int main()
{
	int a, b, mult = 0, sign;
	cout << "Ingresa el primer numero: ";
	cin >> a;
	cout << "Ingresa el segundo numero: ";
	cin >> b;
	
	sign = 1;
	
	if (a < 0)
	{
		a = -a;
		sign = -sign;
	}
	
	if (b < 0)
	{
		b = -b;
		sign = -sign;
	}
	
	for (int i = 0; i < b; i++) {
        mult += a;
    }

    mult *= sign;  

    cout << "El resultado es: " << mult << endl;

    return 0;
}
