// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 30/10/2025
// Número de ejercicio: 7

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Producto 
{
    string nombre;
    string codigo;
    float precio;
    int cantidad_en_inventario;
    string observaciones;
};

int main() 
{
    int n;

    cout << "=== SISTEMA DE INVENTARIO DE PRODUCTOS ===" << endl;
    cout << "Ingrese la cantidad de productos: ";
    cin >> n;
    cin.ignore();

    if (n <= 0) 
    {
        cout << "No se ingresaron productos." << endl;
        return 0;
    }

    vector<Producto> product(n);

    for (int i = 0; i < n; i++) 
    {
        cout << "\n--- Producto " << i + 1 << " ---" << endl;

        cout << "Nombre: ";
        getline(cin, product[i].nombre);

        cout << "Código: ";
        getline(cin, product[i].codigo);

        cout << "Precio: ";
        cin >> product[i].precio;

        cout << "Cantidad en inventario: ";
        cin >> product[i].cantidad_en_inventario;
        cin.ignore();

        if (product[i].cantidad_en_inventario < 5) 
        {
            product[i].observaciones = "PRODUCTO CON BAJA CANTIDAD DE INVENTARIO";
        } 
        else 
        {
            product[i].observaciones = "Cantidad suficiente";
        }
    }

    int expensive = 0;
    for (int i = 1; i < n; i++) 
    {
        if (product[i].precio > product[expensive].precio) 
        {
            expensive = i;
        }
    }

    int total_quantity = 0;
    for (int i = 0; i < n; i++) 
    {
        total_quantity += product[i].cantidad_en_inventario;
    }

    cout << "\n=== PRODUCTO MÁS CARO ===" << endl;
    cout << "Nombre: " << product[expensive].nombre << endl;
    cout << "Código: " << product[expensive].codigo << endl;
    cout << "Precio: " << product[expensive].precio << endl;
    cout << "Cantidad en inventario: " << product[expensive].cantidad_en_inventario << endl;
    cout << "Observaciones: " << product[expensive].observaciones << endl;

    cout << "\nCantidad total de productos en inventario: " << total_quantity << endl;

    return 0;
}
