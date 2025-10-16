// Materia: Programación I, Paralelo 3
// Autor: Sebastián Birbuet
// Fecha creación: 16/10/2024
// Número de ejercicio: 3

#include <iostream>
using namespace std;

int main() 
{
    const int rows = 5, cols = 6;

    const int area[rows][cols] = 
    {
        {0, 1, 0, 0, 0, 1},
        {0, 0, 0, 0, 1, 0},
        {1, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {1, 0, 1, 0, 0, 1}
    };

    cout << "a) Matriz que describe el area:\n";
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++)
            cout << area[i][j] << "\t";
        cout << endl;
    }

    int safe_rows = 0, safe_cols = 0;

    for (int i = 0; i < rows; i++) 
    {
        bool has_zombie = false;
        for (int j = 0; j < cols; j++)
            if (area[i][j] == 1) has_zombie = true;
        if (!has_zombie) safe_rows++;
    }

    for (int j = 0; j < cols; j++) 
    {
        bool has_zombie = false;
        for (int i = 0; i < rows; i++)
            if (area[i][j] == 1) has_zombie = true;
        if (!has_zombie) safe_cols++;
    }

    cout << "\nb) Numero de filas sin muertos vivientes: " << safe_rows;
    cout << "\n   Numero de columnas sin muertos vivientes: " << safe_cols << endl;

    int zombie_row[rows * cols], zombie_col[rows * cols];
    int zombie_count = 0;

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (area[i][j] == 1) 
            {
                zombie_row[zombie_count] = i;
                zombie_col[zombie_count] = j;
                zombie_count++;
            }

    cout << "\nc) Coordenadas de los muertos vivientes:\n";
    for (int i = 0; i < zombie_count; i++)
        cout << "(" << zombie_row[i] + 1 << ", " << zombie_col[i] + 1 << ")\n";

    cout << "\nd) Cantidad total de muertos vivientes: " << zombie_count << endl;

    int zombies_first_col = 0;
    for (int i = 0; i < rows; i++)
        if (area[i][0] == 1)
            zombies_first_col++;

    cout << "\ne) ";
    if (zombies_first_col >= 2)
        cout << "No es posible entrar al complejo\n";
    else
        cout << "Es posible entrar al complejo\n";

    return 0;
}
