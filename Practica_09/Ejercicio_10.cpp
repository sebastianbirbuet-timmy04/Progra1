// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 03/10/2025
// Número de ejercicio: 10

#include <iostream>
using namespace std;

struct Fraccion 
{
    int numerador;
    int denominador;
};

struct FraccionSimplificada 
{
    int numerador;
    int denominador;
};

int MCD(int a, int b)
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

FraccionSimplificada ReducirFraccion(Fraccion f)
{
    FraccionSimplificada result;
    int mcd = MCD(f.numerador, f.denominador);
    result.numerador = f.numerador / mcd;
    result.denominador = f.denominador / mcd;
    return result;
}

int main() 
{
    Fraccion f;

    cout << "Ingrese el numerador de la fracción: ";
    cin >> f.numerador;

    cout << "Ingrese el denominador de la fracción: ";
    cin >> f.denominador;

    if (f.denominador == 0) 
    {
        cout << "Error: El denominador no puede ser cero." << endl;
        return 0;
    }

    FraccionSimplificada simplificada = ReducirFraccion(f);

    cout << "Fracción simplificada: " << simplificada.numerador << "/" << simplificada.denominador << endl;

    return 0;
}
