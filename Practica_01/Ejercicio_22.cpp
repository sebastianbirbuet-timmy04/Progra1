// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Carnet: 6963195 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 17/09/2025
// Número de ejercicio: 22

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


