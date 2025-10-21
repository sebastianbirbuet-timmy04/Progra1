// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 21/10/2025
// Número de ejercicio: 5

#include <iostream>
using namespace std;

int sumArray(int arr[], int n) 
{
    if (n == 0)
        return 0;
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() 
{
    int n;
    cout << "Ingresa la cantidad de elementos del vector: ";
    cin >> n;

    int arr[n];
    cout << "Ingresa los elementos del vector:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    cout << "La suma de los elementos del vector es: " << sumArray(arr, n) << endl;

    return 0;
}
