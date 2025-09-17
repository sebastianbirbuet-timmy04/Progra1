// Materia: Programaci�n I, Paralelo 4
// Autor: Sebasti�n Salvador Birbuet
// Carnet: 6963195 L.P.
// Carrera del estudiante: Ingenier�a de Sistemas
// Fecha creaci�n: 17/09/2025
// N�mero de ejercicio: 25

#include <iostream>
using namespace std;

int main() 
{
    int n, i;
    char option;

    cout << "Por favor, ingresa un numero para mostrar su tabla de multiplicar: ";
    cin >> n;

    cout << "Tabla de multiplicar del " << n << ":" << endl;

    for (int i = 1; i <= 10; i++) 
	{
        cout << n << " * " << i << " = " << n * i << endl;
    }
    
    cout << "Deseas calcular otra tabla? (s/n): ";
    cin >> option;
    
    while (option == 's')
    {
    	cout << "Por favor, ingresa un numero para mostrar su tabla de multiplicar: ";
	    cin >> n;
	
	    cout << "Tabla de multiplicar del " << n << ":" << endl;
	
	    for (int i = 1; i <= 10; i++) 
		{
	        cout << n << " * " << i << " = " << n * i << endl;
	    }
	    
	    cout << "Deseas calcular otra tabla? (s/n): ";
	    cin >> option;	
	}
	
	if (option == 'n')
	{
		cout << "Gracias por usar el programa.";
	}
	
    return 0;
}
