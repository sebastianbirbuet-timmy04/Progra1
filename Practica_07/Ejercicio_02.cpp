// Materia: Programación I, Paralelo 3
// Autor: Sebastián Birbuet
// Fecha creación: 16/10/2024
// Número de ejercicio: 2

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main() 
{
    int n, a, b;
    cout << "Ingresa el orden de la matriz: ";
    cin >> n;
    cout << "Ingresa el valor minimo (A): ";
    cin >> a;
    cout << "Ingresa el valor maximo (B): ";
    cin >> b;

    int matrix[100][100];
    srand(time(0));

    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            {
                matrix[i][j] = a + rand() % (b - a + 1);
            }

    
    cout << "\nMatriz generada:\n";
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
            {
                cout << matrix[i][j] << "\t";
            }
        cout << endl;
    }

    
    int sum_last_col = 0;
    for (int i = 0; i < n; i++)
        {
            sum_last_col += matrix[i][n - 1];
        }

    
    long long prod_last_row = 1;
    for (int j = 0; j < n; j++)
        {
            prod_last_row *= matrix[n - 1][j];
        }

    
    int max_val = matrix[0][0];
    int max_row = 0, max_col = 0;
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] > max_val) 
                {
                    max_val = matrix[i][j];
                    max_row = i;
                    max_col = j;
                }
            }
        }

    double sum = 0, mean, std_dev = 0;
    int total = n * n;

    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                sum += matrix[i][j];
            }
        }

    mean = sum / total;

    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                std_dev += pow(matrix[i][j] - mean, 2);
            }
        }

    std_dev = sqrt(std_dev / total);

    cout << "\nSuma de la ultima columna: " << sum_last_col;
    cout << "\nProducto total de la ultima fila: " << prod_last_row;
    cout << "\nMayor valor: " << max_val << " (Posicion: fila " << max_row + 1 << ", columna " << max_col + 1 << ")";
    cout << "\nDesviacion estandar: " << std_dev << endl;

    return 0;
}
