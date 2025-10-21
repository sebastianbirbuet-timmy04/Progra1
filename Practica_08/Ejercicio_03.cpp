// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 21/10/2025
// Número de ejercicio: 3

#include <iostream>
using namespace std;

int fibonacci(int n) 
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
    int n;
    cout << "Ingresa la posicion n: ";
    cin >> n;

    if (n < 0) 
    {
        cout << "El valor de n debe ser no negativo." << endl;
    } 
    else 
    {
        cout << "El numero de Fibonacci en la posicion " << n << " es: " << fibonacci(n) << endl;
    }

    return 0;
}
