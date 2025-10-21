// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 21/10/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;

int mcd(int a, int b) 
{
    if (b == 0)
        return a;
    return mcd(b, a % b);
}

int main() 
{
    int num1, num2;
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    num1 = abs(num1);
    num2 = abs(num2);

    cout << "El MCD de " << num1 << " y " << num2 << " es: " << mcd(num1, num2) << endl;

    return 0;
}
