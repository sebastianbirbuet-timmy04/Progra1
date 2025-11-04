// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 30/10/2025
// Número de ejercicio: 6

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Empleado 
{
    string nombre;
    int id;
    float sueldo;
    int antiguedad;
};

int countHigherSalary(const vector<Empleado>& employee, float value)
{
    int counter = 0;
    for (int i = 0; i < employee.size(); i++) 
    {
        if (employee[i].sueldo > value) 
        {
            counter++;
        }
    }
    return counter;
}

float averageSeniority(const vector<Empleado>& employee)
{
    int sum = 0;
    for (int i = 0; i < employee.size(); i++) 
    {
        sum += employee[i].antiguedad;
    }
    return (employee.empty()) ? 0 : (float)sum / employee.size();
}

int main() 
{
    int n;

    cout << "=== SISTEMA DE GESTIÓN DE EMPLEADOS ===" << endl;
    cout << "Ingrese la cantidad de empleados: ";
    cin >> n;
    cin.ignore();

    if (n <= 0) 
    {
        cout << "No se ingresaron empleados." << endl;
        return 0;
    }

    vector<Empleado> employee(n);

    for (int i = 0; i < n; i++) 
    {
        cout << "\n--- Empleado " << i + 1 << " ---" << endl;

        cout << "Nombre: ";
        getline(cin, employee[i].nombre);

        cout << "ID: ";
        cin >> employee[i].id;

        cout << "Sueldo: ";
        cin >> employee[i].sueldo;

        cout << "Antigüedad (en años): ";
        cin >> employee[i].antiguedad;
        cin.ignore();
    }

    float value;
    cout << "\nIngrese un valor de sueldo para comparar: ";
    cin >> value;

    int quantity = countHigherSalary(employee, value);
    cout << "\nCantidad de empleados con sueldo mayor a " << value << ": " << quantity << endl;

    float average = averageSeniority(employee);
    cout << "Promedio de antigüedad de todos los empleados: " << average << " años" << endl;

    return 0;
}
