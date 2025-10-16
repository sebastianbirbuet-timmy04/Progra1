// Materia: Programación I, Paralelo 1
// Autor: Sebastián Birbuet
// Fecha creación: 07/10/2024
// Número de ejercicio: 2

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main() 
{
    const int N = 6;
    string minerals[N] = {"SN", "SB", "AU", "PT", "AG", "CU"};
    double production[N] = {998.000, 876.500, 786.670, 636.143, 135.567, 109.412};

    string seek;
    cout << "Ingresa el nombre del mineral a buscar (SN, SB, AU, PT, AG, CU): ";
    cin >> seek;

    bool found = false;
    for (int i = 0; i < N; i++) 
    {
        if (minerals[i] == seek) 
        {
            cout << "Produccion de " << minerals[i] << ": " << production[i] << " TM\n";
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Mineral no encontrado.\n";

    for (int i = 0; i < N - 1; i++) 
    {
        for (int j = 0; j < N - i - 1; j++) 
        {
            if (production[j] < production[j + 1]) 
            {
                double tempProd = production[j];
                production[j] = production[j + 1];
                production[j + 1] = tempProd;

                string tempNom = minerals[j];
                minerals[j] = minerals[j + 1];
                minerals[j + 1] = tempNom;
            }
        }
    }

    cout << "\nMineral\tProduccion (TM)\n";
    for (int i = 0; i < N; i++) {
        cout << minerals[i] << "\t" << production[i] << "\n";
    }

    return 0;
}

