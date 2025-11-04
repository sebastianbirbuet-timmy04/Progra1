// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 30/10/2025
// Número de ejercicio: 4

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Empleado 
{
    string nombre;
    string genero;
    double salario;
};

int main() 
{
    int n;

    cout << "=== REGISTRO DE EMPLEADOS DE LA UCB ===" << endl;
    cout << "Ingresa la cantidad de empleados: ";
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

        cout << "Género: ";
        getline(cin, employee[i].genero);

        cout << "Salario: ";
        cin >> employee[i].salario;
        cin.ignore();
    }

    
    int min = 0;
    int maj = 0;

    for (int i = 1; i < n; i++) 
    {
        if (employee[i].salario < employee[min].salario)
            min = i;
        if (employee[i].salario > employee[maj].salario)
            maj = i;
    }

    
    cout << "\n=== EMPLEADO CON MENOR SALARIO ===" << endl;
    cout << "Nombre: " << employee[min].nombre << endl;
    cout << "Género: " << employee[min].genero << endl;
    cout << "Salario: " << employee[min].salario << endl;

    cout << "\n=== EMPLEADO CON MAYOR SALARIO ===" << endl;
    cout << "Nombre: " << employee[maj].nombre << endl;
    cout << "Género: " << employee[maj].genero << endl;
    cout << "Salario: " << employee[maj].salario << endl;

    return 0;
}

