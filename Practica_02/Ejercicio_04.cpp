// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Carnet: 6963195 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 07/09/2025
// Número de ejercicio: 4

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    srand(time(0));

    int number = rand() % 51;
    int attempt;
    int minRange = 0;
    int maxRange = 50;

    cout << "Vamos a jugar, estoy pensando un numero entre 0 y 50" << endl;

    for (int i = 1; i <= 5; i++) 
	{
        cout << "Intento " << i << endl;
        cout << "? ";
        cin >> attempt;

        if (attempt == number) 
		{
            cout << "Felicitaciones... Adivinaste el numero." << endl;
            break;
        } 
		else 
		{
            if (attempt < number)
            {
            	minRange = attempt;
			}
            else
            {
            	maxRange = attempt;
			}

            cout << "El numero esta entre " << minRange << " y " << maxRange << endl;
        }

        if (i == 5 and attempt != number)
            {
            	cout << "Se acabo el juego. El numero pensado era " << number << endl;
			}
    }

    return 0;
}

