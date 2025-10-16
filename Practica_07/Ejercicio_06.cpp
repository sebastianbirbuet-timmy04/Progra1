// Materia: Programación I, Paralelo 3
// Autor: Sebastián Birbuet
// Fecha creación: 16/10/2024
// Número de ejercicio: 6

#include <iostream>
using namespace std;

int main() 
{
    int N, M;
    cout << "Ingrese el numero de filas N: ";
    cin >> N;
    cout << "Ingrese el numero de columnas M: ";
    cin >> M;

    int matrix[N][M], transpose[M][N];

    
    cout << "Ingrese los elementos de la matriz (" << N << "x" << M << "):\n";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> matrix[i][j];

    
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            transpose[j][i] = matrix[i][j];

   
    cout << "\nMatriz traspuesta (" << M << "x" << N << "):\n";
    for (int i = 0; i < M; i++) 
    {
        for (int j = 0; j < N; j++)
            cout << transpose[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
