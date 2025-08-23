// Materia: Programación I, Paralelo 4

// Autor: Sebastián Salvador Birbuet

// Carnet: 6963195 L.P.

// Carrera del estudiante: Ingeniería de Sistemas

// Fecha creación: 23/08/2025

// Número de ejercicio: 1

#include <iostream>
#include <string> //Nos permite incluir texto no numérico en el programa, ojo que se debe usar guiones bajos para los espacios, de lo contrario, el programa se corta.
using namespace std;

int main()
{
	string name, degree;
	cout << "Por favor, ingresa tu nombre completo: ";
	cin >> name;
	cout << "Ahora ingresa tu carrera: ";
	cin >> degree;
	
	cout << "Hola, soy estudiante de programacion." << endl; //"endl" es la abreviatura de "Endline" que nos permite imprimir el codigo con espacios de una linea.
	cout << name << endl;
	cout << degree << endl;
	
	return 0;
}

