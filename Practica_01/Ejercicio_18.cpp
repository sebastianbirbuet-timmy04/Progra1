// Materia: Programaci�n I, Paralelo 4
// Autor: Sebasti�n Salvador Birbuet
// Carnet: 6963195 L.P.
// Carrera del estudiante: Ingenier�a de Sistemas
// Fecha creaci�n: 16/09/2025
// N�mero de ejercicio: 18

#include <iostream>
using namespace std;

int main()
{
    int n = 2;          
    int counter = 0; 
	int prime, i;  

    while (counter < 100) 
	{
        prime = 0;

        for (i = 1; i <= n; i++) 
		{
            if (n % i == 0) 
			{
                prime++;
            }
        }

        if (prime == 2) 
		{  
            cout << n << " ";
            counter++;
        }

        n++;
    }

    cout << endl;
    return 0;
}
