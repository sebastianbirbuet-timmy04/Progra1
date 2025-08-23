// Materia: Programación I, Paralelo 4

// Autor: Sebastián Salvador Birbuet

// Carnet: 6963195 L.P.

// Carrera del estudiante: Ingeniería de Sistemas

// Fecha creación: 23/08/2025

// Número de ejercicio: 2

#include <iostream>
using namespace std;

int main()
{
	int variable1, variable2;
	variable1 = 0; //Valor inicial de la variable 1.
	variable2 = 0; //Valor inicial de la variable 2.
	cout << "Estos son los valores iniciales de las variables: " << endl; //Impresion de los valores iniciales de las variables.
	cout << "Variable 1: ";
	cout << variable1 << endl;
	cout << "Variable 2: ";
	cout << variable2 << endl;
	
	cout << "Por favor, ingresa el nuevo valor de la variable 1: ";
	cin >> variable1; //Asignacion del nuevo valor a la variable 1.
	cout << "Ahora ingresa el nuvo valor de la variable 2: ";
	cin >> variable2; //Asignacion del nuevo valor a la variable 2.
	cout << "Estos son los valores nuevos de las variables: " << endl; //Impresion de los nuevos valores de las variables.
	cout << "Variable 1: ";
	cout << variable1 << endl;
	cout << "Variable 2: ";
	cout << variable2 << endl;
	
	return 0;
}
