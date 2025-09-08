// Materia: Programaci�n I, Paralelo 4
// Autor: Sebasti�n Salvador Birbuet
// Carnet: 6963195 L.P.
// Carrera del estudiante: Ingenier�a de Sistemas
// Fecha creaci�n: 07/09/2025
// N�mero de ejercicio: 2

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

    int head = 0, tail = 0;

    for (int i = 0; i < n; ++i) 
	{
        int coin = rand() % 2 + 1; 
        switch (coin) 
		{
            case 1: 
				head++; 
				break;
            default:
            	tail++;
            	break;
        }
    }

	int headPercentage = (head * 100) / n;
    int tailPercentage = (tail * 100) / n;

    cout << "El porcentaje de caras es: " << headPercentage << endl;
    cout << "El porcentaje de cruces es: " << tailPercentage << endl;

    return 0;
}
