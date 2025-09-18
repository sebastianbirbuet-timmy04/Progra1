// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 17/09/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;

double celsiusAFahrenheit(double celsius) 
{
    return (celsius * 9.0 / 5.0) + 32.0;
}

double mayorTemperatura(double t1, double t2) 
{
    if (t1 > t2)
        return t1;
    else
        return t2;
}

int main() 
{
    double c1, c2, f1, f2;

    cout << "Ingrese la primera temperatura en Celsius: ";
    cin >> c1;
    cout << "Ingrese la segunda temperatura en Celsius: ";
    cin >> c2;

    f1 = celsiusAFahrenheit(c1);
    f2 = celsiusAFahrenheit(c2);

    cout << "La primera temperatura en Fahrenheit es: " << f1 << endl;
    cout << "La segunda temperatura en Fahrenheit es: " << f2 << endl;
    cout << "La mayor temperatura es: " << mayorTemperatura(f1, f2) << endl;

    return 0;
}

