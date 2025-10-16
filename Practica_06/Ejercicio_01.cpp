// Materia: Programación I, Paralelo 1
// Autor: Sebastián Birbuet
// Fecha creación: 07/10/2024
// Número de ejercicio: 1

#include <iostream>
#include <vector>
#include <cmath> 

using namespace std;

int main() 
{
    vector<int> ages;
    int age;

    cout << "Ingresa edades (usa -1 para terminar):\n";

    while (true) 
    {
        cin >> age;
        if (age == -1) break;
        if (age < 0) 
        {
            cout << "Edad no válida. Intenta de nuevo.\n";
            continue;
        }
        ages.push_back(age);
    }

    int n = ages.size();
    if (n == 0) 
    {
        cout << "No se ingresaron edades.\n";
        return 0;
    }

    double sum = 0;
    for (int e : ages) sum += e;
    double mean = sum / n;

    double addsquare = 0;
    for (int e : ages) 
    {
        double dif = e - mean;
        addsquare += dif * dif;
    }

    double var = addsquare / n;
    double dsv = sqrt(var);

    cout << "\nCantidad de edades: " << n << "\n";
    cout << "Media: " << mean << "\n";
    cout << "Desviacion tipica: " << dsv << "\n";

    return 0;
}

