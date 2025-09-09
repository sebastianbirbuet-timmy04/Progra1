// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Carnet: 6963195 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 08/09/2025
// Número de ejercicio: 6

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

    int count = 0;

    for (int i = 0; i < n; i++) 
	{
        int num = rand() % 10001;
        cout << num << endl;

        int prime = 1;
        if (num < 2) 
		{
            prime = 0;
        } 
		else 
		{
            for (int j = 2; j * j <= num; j++) 
			{
                if (num % j == 0) 
				{
                    prime = 0;
                    break;
                }
            }
        }

        if (prime == 1) 
		{
            count++;
        }
    }

    cout << "La cantidad de numeros primos generada es: " << count << endl;

    return 0;
}


