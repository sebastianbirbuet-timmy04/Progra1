// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Carnet: 6963195 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 16/09/2025
// Número de ejercicio: 18

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
