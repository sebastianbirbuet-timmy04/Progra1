// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Carnet: 6963195 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 17/09/2025
// Número de ejercicio: 23

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

