// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 17/09/2025
// Número de ejercicio: 5

#include <iostream>
using namespace std;

double CalculateBaseSalary(int hours, double rate) 
{
    if (hours <= 8) return hours * rate;
    return 8 * rate;
}

double CalculateExtraSalary(int hours, double rate) 
{
    if (hours > 8) return (hours - 8) * rate;
    return 0.0;
}

double CalculateBonus(int hours, double bonus) 
{
    if (hours > 8) return (hours - 8) * bonus;
    return 0.0;
}

int main() {
    int hours;
    double rate, bonus;

    cout << "Ingresa las horas trabajadas: ";
    cin >> hours;
    cout << "Ingresa la tarifa de interes: ";
    cin >> rate;
    cout << "Ingresa la bonificacion por horas extra: ";
    cin >> bonus;

    double baseSalary = CalculateBaseSalary(hours, rate);
    double extraSalary = CalculateExtraSalary(hours, rate);
    double extraBonus = CalculateBonus(hours, bonus);
    double totalSalary = baseSalary + extraSalary + extraBonus;

    cout << "Salario base: " << baseSalary << endl;
    cout << "Horas extra: " << extraSalary << endl;
    cout << "Bonficacion: " << extraBonus << endl;
    cout << "Total: " << totalSalary << endl;

    return 0;
}

