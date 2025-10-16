// Materia: Programación I, Paralelo 1
// Autor: Sebastián Birbuet
// Fecha creación: 07/10/2024
// Número de ejercicio: 4

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main() 
{
    int N;
    cout << "Ingresa la cantidad de numeros: ";
    cin >> N;

    vector<int> v(N);

    cout << "Ingresa los " << N << " numeros:\n";
    for (int i = 0; i < N; i++) 
    {
        cin >> v[i];
    }

    int k;
    cout << "Cuantas posiciones deseas rotar a la derecha: ";
    cin >> k;

    k = k % N;

    vector<int> rotated(N);
    for (int i = 0; i < N; i++) 
    {
        rotated[(i + k) % N] = v[i];
    }

    cout << "\nVector despues de rotar " << k << " posiciones a la derecha:\n";
    for (int i = 0; i < N; i++) 
    {
        cout << rotated[i] << " ";
    }
    cout << "\n";

    return 0;
}
