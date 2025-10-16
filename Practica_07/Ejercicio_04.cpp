// Materia: Programación I, Paralelo 3
// Autor: Sebastián Birbuet
// Fecha creación: 16/10/2024
// Número de ejercicio: 4

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Por favor, ingresa 'N': ";
    cin >> n;
    int matrix[n][n];

    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            {
                matrix[i][j] = i + j + 1 + i; 
            }

    cout << "Matriz " << n << "x" << n << " generada:\n";
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
