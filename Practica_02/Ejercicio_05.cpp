// Materia: Programaci�n I, Paralelo 4
// Autor: Sebasti�n Salvador Birbuet
// Carnet: 6963195 L.P.
// Carrera del estudiante: Ingenier�a de Sistemas
// Fecha creaci�n: 08/09/2025
// N�mero de ejercicio: 5

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    srand(time(0));

    int n;
    cout << "Por favor, ingresa la cantidad de numeros a generar: ";
    cin >> n;

    int add = 0;
    int maj = 0;
    int min = 1000;

    for (int i = 0; i < n; i++) 
	{
        int num = rand() % 1001;
        add += num;
        if (num > maj) 
		{
			maj = num;
		}
        if (num < min) 
        {
        	min = num;
		}
    }

    int avg = add / n;

    cout << "La sumatoria es: " << add << endl;
    cout << "El promedio es: " << avg << endl;
    cout << "El mayor valor es: " << maj << endl;
    cout << "El menor valor es: " << min << endl;

    return 0;
}

