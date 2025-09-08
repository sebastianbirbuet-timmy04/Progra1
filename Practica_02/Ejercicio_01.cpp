// Materia: Programaci�n I, Paralelo 4
// Autor: Sebasti�n Salvador Birbuet
// Carnet: 6963195 L.P.
// Carrera del estudiante: Ingenier�a de Sistemas
// Fecha creaci�n: 07/09/2025
// N�mero de ejercicio: 1

#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() 
{
    int n;
    cout << "Por favor, ingresa el numero de lanzamientos: ";
    cin >> n;

    srand(time(0));

    int side2 = 0, side4 = 0, side6 = 0;

    for (int i = 0; i < n; ++i) 
	{
        int die = rand() % 6 + 1; 
        switch (die) 
		{
            case 2: 
				side2++; 
				break;
            case 4: 
				side4++; 
				break;
            case 6: 
				side6++; 
				break;
        }
    }


    cout << "Frecuencia de la cara 2: " << side2 << endl;
    cout << "Frecuencia de la cara 4: " << side4 << endl;
    cout << "Frecuencia de la cara 6: " << side6 << endl;

    return 0;
}
