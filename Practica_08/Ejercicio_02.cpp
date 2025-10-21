// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 21/10/2025
// Número de ejercicio: 2

#include <iostream>
using namespace std;

int power(int a, int n) 
{
    if (n == 0)
        return 1;
    return a * power(a, n - 1);
}

int main() 
{
    int base, exp;
    cout << "Ingresa la base: ";
    cin >> base;
    cout << "Ingresa el exponente: ";
    cin >> exp;

    if (exp < 0) 
    {
        cout << "El exponente debe ser no negativo." << endl;
    }
    else 
    {
        cout << base << "^" << exp << " = " << power(base, exp) << endl;
    }

    return 0;
}
