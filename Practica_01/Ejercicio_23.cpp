// Materia: Programaci�n I, Paralelo 4
// Autor: Sebasti�n Salvador Birbuet
// Carnet: 6963195 L.P.
// Carrera del estudiante: Ingenier�a de Sistemas
// Fecha creaci�n: 17/09/2025
// N�mero de ejercicio: 23

#include <iostream>
using namespace std;

int main() 
{
    int n, reverse = 0, negative = 0, digit;
    cout << "Ingresa un numero entero: ";
    cin >> n;

    if (n < 0) 
	{       
        n = -n;
        negative = 1;
    }

    while (n > 0) 
	{
        digit = n % 10;   
        reverse = reverse * 10 + digit; 
        n = n / 10;            
    }

    if (negative)
        reverse = -reverse;

    cout << "El numero invertido es: " << reverse << endl;

    return 0;
}

