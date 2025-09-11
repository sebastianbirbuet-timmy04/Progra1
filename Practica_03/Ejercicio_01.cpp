// Materia: Programación I, Paralelo 4

// Autor: Sebastián Salvador Birbuet

// Carnet: 6963195 L.P.

// Carrera del estudiante: Ingeniería de Sistemas

// Fecha creación: 11/09/2025

// Número de ejercicio: 1
#include<iostream>
using namespace std;

int oddEven (int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main ()
{
    int n;
    cout << "Por favor, ingresa un numero: ";
    cin >> n;
    
    if (oddEven(n))
    {
        cout << n << " es par.";
    }
    
    else
    {
        cout << n << " es impar.";
    }
    
    return 0;
}
