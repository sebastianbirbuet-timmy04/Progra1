// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 17/09/2025
// Número de ejercicio: 3

#include <iostream>
using namespace std;

void ModificarValores(int value, int &reference) 
{
    value = value * 2;
    reference = reference + 10;
    cout << "Dentro de la funcion:" << endl;
    cout << "Valor (por valor) = " << value << endl;
    cout << "Referencia (por referencia) = " << reference << endl;
}

int main() 
{
    int a, b;
    cout << "Ingrese el primer numero (por valor): ";
    cin >> a;
    cout << "Ingrese el segundo numero (por referencia): ";
    cin >> b;

    cout << "Antes del proceso:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    ModificarValores(a, b);

    cout << "Despues del proceso:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}


