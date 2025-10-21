// Materia: Programaci�n I, Paralelo 4
// Autor: Sebasti�n Salvador Birbuet
// Fecha creaci�n: 21/10/2025
// N�mero de ejercicio: 7

#include <iostream>
using namespace std;

int Q(int n) 
{
    if (n == 1)
        return 1;
    return n * n + Q(n - 1);
}

int main() 
{
    int n;
    cout << "Ingresa un numero entero positivo: ";
    cin >> n;

    if (n <= 0)
        cout << "El numero debe ser positivo." << endl;
    else
        cout << "Q(" << n << ") = " << Q(n) << endl;

    return 0;
}
