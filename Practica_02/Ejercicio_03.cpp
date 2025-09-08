// Materia: Programaci�n I, Paralelo 4
// Autor: Sebasti�n Salvador Birbuet
// Carnet: 6963195 L.P.
// Carrera del estudiante: Ingenier�a de Sistemas
// Fecha creaci�n: 07/09/2025
// N�mero de ejercicio: 3

#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() 
{
    srand(time(0)); 

    int number = rand() % 10 + 1; 
    int factorial = 1;

    for (int i = 1; i <= number; i++) 
	{
        factorial *= i;
    }

    cout << "Se genero el numero " << number << endl;
    cout << "El factorial de " << number << " es "<< factorial << endl;

    return 0;
}

