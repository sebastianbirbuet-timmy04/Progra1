// Materia: Programación I, Paralelo 4

// Autor: Sebastián Salvador Birbuet

// Carnet: 6963195 L.P.

// Carrera del estudiante: Ingeniería de Sistemas

// Fecha creación: 28/08/2025

// Número de ejercicio: 11
#include<iostream>
using namespace std;

int main()
{
	int month;
	cout << "Por favor, ingrese un numero para dar el mes: ";
	cin >> month;
	
	switch (month)
	{
		case 1:
			cout << "Enero.";
			break;
		case 2:
			cout << "Febrero.";
			break;
		case 3:
			cout << "Marzo.";
			break;
		case 4:
			cout << "Abril.";
			break;
		case 5:
			cout << "Mayo.";
			break;
		case 6:
			cout << "Junio.";
			break;	
		case 7:
			cout << "Julio.";
			break;
		case 8:
			cout << "Agosto.";
			break;
		case 9:
			cout << "Septiembre.";
			break;
		case 10:
			cout << "Octubre.";
			break;
		case 11:
			cout << "Noviembre.";
			break;
		case 12:
			cout << "Diciembre.";
			break;
		default:
			cout << "Entrada invalida.";
			break;
	}
}
