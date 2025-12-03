// Materia: Programación I, Paralelo 4
// Autor: Sebastián Birbuet
// Fecha creación: 02-12-2025
// Número de ejercicio: 3

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Pizza
{
    int codigo;
    char nombre[30];
    char tipo[15];
    char tamano[20];
    float precio;
};

struct Venta
{
    char ci[20];
    int codigo_pizza;
    char tamano[20];
    int cantidad;
};

bool existePizza(int codigo)
{
    ifstream file("PRODUCTO.BIN", ios::binary);
    if (!file) return false;
    Pizza p;
    while (file.read((char*)&p, sizeof(Pizza)))
    {
        if (p.codigo == codigo) return true;
    }
    return false;
}

float calcularPrecio(const char tipo[], float base)
{
    if (strcmp(tipo, "ESPECIAL") == 0)
        return base * 1.10f;
    return base;
}

void adicionarPizza()
{
    Pizza p;

    cout << "Codigo: ";
    cin >> p.codigo;

    if (existePizza(p.codigo))
    {
        cout << "Ya existe una pizza con ese codigo.\n";
        return;
    }

    cout << "Nombre: ";
    cin.ignore();
    cin.getline(p.nombre, 30);

    cout << "Tipo (TRADICIONAL/ESPECIAL): ";
    cin.getline(p.tipo, 15);

    cout << "Tamano (XS/MEDIANA/GRANDE/FAMILIAR/INTERMINABLE): ";
    cin.getline(p.tamano, 20);

    float base;
    cout << "Precio base: ";
    cin >> base;

    p.precio = calcularPrecio(p.tipo, base);

    ofstream file("PRODUCTO.BIN", ios::binary | ios::app);
    file.write((char*)&p, sizeof(Pizza));

    cout << "Pizza registrada.\n";
}

void listadoPizzas()
{
    ifstream file("PRODUCTO.BIN", ios::binary);
    if (!file)
    {
        cout << "No existe PRODUCTO.BIN\n";
        return;
    }

    cout << "CODIGO NOMBRE TIPO TAMANO PRECIO CANTIDAD TOTAL\n";

    Pizza p;

    while (file.read((char*)&p, sizeof(Pizza)))
    {
        int cantidadVendida = 0;

        ifstream fv("VENTAS.TXT");
        while (!fv.eof())
        {
            Venta v;
            fv.getline(v.ci, 20, ';');
            if (fv.eof()) break;
            fv.get();
            fv >> v.codigo_pizza;
            fv.get();
            fv.getline(v.tamano, 20, ';');
            fv.get();
            fv >> v.cantidad;
            fv.get();

            if (v.codigo_pizza == p.codigo && strcmp(v.tamano, p.tamano) == 0)
                cantidadVendida += v.cantidad;
        }

        float total = cantidadVendida * p.precio;

        cout << p.codigo << "  "
             << p.nombre << "  "
             << p.tipo << "  "
             << p.tamano << "  "
             << p.precio << "  "
             << cantidadVendida << "  "
             << total << endl;
    }
}

void modificarPrecio()
{
    int codigo;
    cout << "Codigo a modificar: ";
    cin >> codigo;

    fstream file("PRODUCTO.BIN", ios::binary | ios::in | ios::out);
    if (!file)
    {
        cout << "No existe PRODUCTO.BIN\n";
        return;
    }

    Pizza p;

    while (file.read((char*)&p, sizeof(Pizza)))
    {
        if (p.codigo == codigo)
        {
            float nuevoBase;
            cout << "Nuevo precio base: ";
            cin >> nuevoBase;

            p.precio = calcularPrecio(p.tipo, nuevoBase);

            file.seekp(-sizeof(Pizza), ios::cur);
            file.write((char*)&p, sizeof(Pizza));

            cout << "Precio modificado.\n";
            return;
        }
    }

    cout << "No existe pizza con ese codigo.\n";
}

void eliminarPizza()
{
    int codigo;
    cout << "Codigo a eliminar: ";
    cin >> codigo;

    if (!existePizza(codigo))
    {
        cout << "No existe pizza con ese codigo.\n";
        return;
    }

    ifstream f1("PRODUCTO.BIN", ios::binary);
    ofstream f2("TEMP.BIN", ios::binary);

    Pizza p;
    while (f1.read((char*)&p, sizeof(Pizza)))
    {
        if (p.codigo != codigo)
            f2.write((char*)&p, sizeof(Pizza));
    }

    f1.close();
    f2.close();

    remove("PRODUCTO.BIN");
    rename("TEMP.BIN", "PRODUCTO.BIN");

    cout << "Pizza eliminada.\n";
}

void adicionarVenta()
{
    Venta v;

    cout << "CI Cliente: ";
    cin.ignore();
    cin.getline(v.ci, 20);

    cout << "Codigo Pizza: ";
    cin >> v.codigo_pizza;

    if (!existePizza(v.codigo_pizza))
    {
        cout << "No existe pizza con ese codigo.\n";
        return;
    }

    cout << "Tamano vendido: ";
    cin.ignore();
    cin.getline(v.tamano, 20);

    cout << "Cantidad vendida: ";
    cin >> v.cantidad;

    ofstream file("VENTAS.TXT", ios::app);
    file << v.ci << ";"
         << v.codigo_pizza << ";"
         << v.tamano << ";"
         << v.cantidad << "\n";

    cout << "Venta registrada.\n";
}

int main()
{
    int opc;

    do
    {
        cout << "\nMENU PIZZERIA ELIS\n";
        cout << "1. Adicionar Pizza\n";
        cout << "2. Listado de Pizzas\n";
        cout << "3. Modificar precio\n";
        cout << "4. Eliminar Pizza\n";
        cout << "5. Adicionar Venta\n";
        cout << "6. Salir\n";
        cout << "Opcion: ";
        cin >> opc;

        switch (opc)
        {
        case 1: adicionarPizza(); break;
        case 2: listadoPizzas(); break;
        case 3: modificarPrecio(); break;
        case 4: eliminarPizza(); break;
        case 5: adicionarVenta(); break;
        }
    }
    while (opc != 6);

    return 0;
}
