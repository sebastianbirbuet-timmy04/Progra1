// Materia: Programación I, Paralelo 3
// Autor: Sebastián Birbuet
// Fecha creación: 16/10/2024
// Número de ejercicio: 5

#include <iostream>
using namespace std;

int main() 
{
    int N, M;
    cout << "Ingrese el numero de filas N: ";
    cin >> N;
    cout << "Ingrese el numero de columnas M: ";
    cin >> M;

    int A[N][M], B[M][N], C[N][N];

  
    cout << "Ingrese los elementos de la matriz A (" << N << "x" << M << "):\n";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> A[i][j];

 
    cout << "Ingrese los elementos de la matriz B (" << M << "x" << N << "):\n";
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            cin >> B[i][j];

 
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            C[i][j] = 0;

  
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            for (int k = 0; k < M; k++)
                C[i][j] += A[i][k] * B[k][j];

    cout << "\nMatriz resultado C (" << N << "x" << N << "):\n";
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++)
            cout << C[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
