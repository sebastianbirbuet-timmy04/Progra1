// Materia: Programación I, Paralelo 3
// Autor: Sebastián Birbuet
// Fecha creación: 16/10/2024
// Número de ejercicio: 1

#include <iostream>
using namespace std;

int main()
{
    int n, i, j, temp;
    cout << "Ingresa el orden de la matriz: ";
    cin >> n;

    int matrix[100][100]; 

    
    cout << "Ingresa los elementos de la matriz:\n";
    for ( i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            {
                cin >> matrix[i][j];
            }

    for (j = 0; j < n; j++) 
    {
        temp = matrix[0][j];
        matrix[0][j] = matrix[n - 1][j];
        matrix[n - 1][j] = temp;
    }

    cout << "\nMatriz resultante:\n";
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++)
            {
                cout << matrix[i][j] << " ";
            }
        cout << endl;
    }

    return 0;
}
