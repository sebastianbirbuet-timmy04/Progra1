// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 21/10/2025
// Número de ejercicio: 1

#include <iostream>
using namespace std;

int add(int n) 
{
    if (n < 10)
        return n;
    return (n % 10) + add(n / 10);
}

int main() 
{
    int number;
    cout << "Ingrese un numero entero positivo: ";
    cin >> number;

    if (number < 0) 
    {
        cout << "El numero debe ser positivo." << endl;
    } else 
    {
        cout << "La suma de los digitos es: " << add(number) << endl;
    }

    return 0;
}
