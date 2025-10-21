// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 21/10/2025
// Número de ejercicio: 6

#include <iostream>
using namespace std;

bool compareArrays(int arr1[], int arr2[], int n) 
{
    if (n == 0)
        return true;
    if (arr1[n - 1] != arr2[n - 1])
        return false;
    return compareArrays(arr1, arr2, n - 1);
}

int main() 
{
    int n;
    cout << "Ingresa la cantidad de elementos de los vectores: ";
    cin >> n;

    int arr1[n], arr2[n];
    cout << "Ingresa los elementos del primer vector:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr1[i];
    }

    cout << "Ingresa los elementos del segundo vector:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr2[i];
    }

    if (compareArrays(arr1, arr2, n))
        cout << "Los vectores son iguales." << endl;
    else
        cout << "Los vectores son diferentes." << endl;

    return 0;
}
