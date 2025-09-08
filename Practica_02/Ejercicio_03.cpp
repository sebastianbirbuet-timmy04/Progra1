// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Carnet: 6963195 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 07/09/2025
// Número de ejercicio: 3

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

