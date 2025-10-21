// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 21/10/2025
// Número de ejercicio: 8

#include <iostream>
using namespace std;

void ullman(int n) 
{
    cout << n << " ";
    if (n == 1)
        return;
    if (n % 2 == 0)
        ullman(n / 2);
    else
        ullman(3 * n + 1);
}

int main() 
{
    int n;
    cout << "Ingrese un numero entero positivo mayor que 1: ";
    cin >> n;

    if (n <= 1)
        cout << "El numero debe ser mayor que 1." << endl;
    else 
    {
        cout << "Secuencia de Ullman: ";
        ullman(n);
        cout << endl;
    }

    return 0;
}
