// Materia: Programaci�n I, Paralelo 4
// Autor: Sebasti�n Salvador Birbuet
// Carnet: 6963195 L.P.
// Carrera del estudiante: Ingenier�a de Sistemas
// Fecha creaci�n: 17/09/2025
// N�mero de ejercicio: 24

#include <iostream>
using namespace std;

int main()
{
	int option;
	cout << "Ingresa la opcion 1, 2, 3 o 0 para salir: ";
	cin >> option;
	
	while (option != 0)
	{
		if (option == 1)
		{
			cout << "Opcion seleccionada: 1." << endl;
			cout << "Ingresa la opcion 1, 2, 3 o 0 para salir: ";
			cin >> option;
		}
		else 
		{
			if (option == 2)
			{
				cout << "Opcion seleccionada: 2." << endl;
				cout << "Ingresa la opcion 1, 2, 3 o 0 para salir: ";
				cin >> option;
			}
			else
			{
				if (option == 3)
				{
					cout << "Opcion seleccionada: 3." << endl;
					cout << "Ingresa la opcion 1, 2, 3 o 0 para salir: ";
					cin >> option;
				}
				else
				{
					cout << "Opcion invalida." << endl;
					cout << "Ingresa la opcion 1, 2, 3 o 0 para salir: ";
					cin >> option;
				}
			}
		}
	}
	
	if (option == 0)
	{
		cout << "Gracias por usar el programa.";
	}
	return 0;
}

