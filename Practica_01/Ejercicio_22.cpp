// Materia: Programaci�n I, Paralelo 4
// Autor: Sebasti�n Salvador Birbuet
// Carnet: 6963195 L.P.
// Carrera del estudiante: Ingenier�a de Sistemas
// Fecha creaci�n: 17/09/2025
// N�mero de ejercicio: 22

#include <iostream>
using namespace std;

int main() 
{
    int a, b;

    cout << "Ingresa el primer numero: ";
    cin >> a;
    cout << "Ingresa el segundo numero: ";
    cin >> b;

    if (a != 0 and b % a == 0) 
	{
        cout << b << " es multiplo de " << a << endl;
    } 
	else 
	{
		if (b != 0 and a % b == 0) 
		{
        cout << a << " es multiplo de " << b << endl;
    	} 
		else 
		{
	    cout << "Ninguno es multiplo del otro." << endl;
		}
	}

    return 0;
}


