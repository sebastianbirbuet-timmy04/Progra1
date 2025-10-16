// Materia: Programación I, Paralelo 1
// Autor: Sebastián Birbuet
// Fecha creación: 07/10/2024
// Número de ejercicio: 

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() 
{
    vector<string> names = {"Ana", "Luis", "Carlos", "Marta", "Sofia", "Pedro", "Lucia", "Jorge", "Elena", "Diego"};
    vector<string> surnames = {"Perez", "Gomez", "Lopez", "Fernandez", "Diaz", "Torres", "Castro", "Vargas", "Rojas", "Mendez"};
    vector<int> ages = {18, 22, 25, 30, 33, 40, 45, 50, 55, 60};

    int N;
    cout << "¿Cuantas veces deseas generar una combinacion aleatoria? ";
    cin >> N;

    srand(time(0)); 

    for (int i = 0; i < N; i++) 
    {
        int iName = rand() % 10;
        int iSurname = rand() % 10;
        int iAge = rand() % 10;

        cout << i + 1 << ". " << names[iName] << " " << surnames[iSurname]
             << ", Edad: " << ages[iAge] << "\n";
    }

    return 0;
}

