// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Carnet: 6963195 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 17/09/2025
// Número de ejercicio: 25

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
