// Materia: Programación I, Paralelo 4
// Autor: Sebastián Birbuet
// Fecha creación: 02-12-2025
// Número de ejercicio: 2

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Producto
{
    int codigo;
    char nombre[30];
    int cantidad_inicial;
    float precio;
};

struct Venta
{
    char ci[20];
    char nombre_cliente[40];
    int codigo_producto;
    int cantidad;
};

bool existeProducto(int codigo)
{
    ifstream file("PRODUCTOS.BIN", ios::binary);
    if (!file) return false;

    Producto p;

    while (file.read((char*)&p, sizeof(Producto)))
    {
        if (p.codigo == codigo) return true;
    }
    return false;
}

void adicionarProducto()
{
    Producto p;

    cout << "Codigo producto: ";
    cin >> p.codigo;

    if (existeProducto(p.codigo))
    {
        cout << "ERROR: Ya existe un producto con ese codigo.\n";
        return;
    }

    cout << "Nombre del producto: ";
    cin.ignore();
    cin.getline(p.nombre, 30);

    cout << "Cantidad inicial: ";
    cin >> p.cantidad_inicial;

    cout << "Precio unitario: ";
    cin >> p.precio;

    ofstream file("PRODUCTOS.BIN", ios::binary | ios::app);
    file.write((char*)&p, sizeof(Producto));

    cout << "Producto registrado.\n";
}

void listadoProductos()
{
    ifstream file("PRODUCTOS.BIN", ios::binary);
    if (!file)
    {
        cout << "No hay productos registrados.\n";
        return;
    }

    cout << "CODIGO  NOMBRE                CANTIDAD   PRECIO   VENDIDO   TOTAL\n";

    Producto p;

    while (file.read((char*)&p, sizeof(Producto)))
    {
        int cantidadVendida = 0;

        ifstream fv("VENTAS.txt");
        while (!fv.eof())
        {
            Venta v;
            fv.getline(v.ci, 20, ';');
            if (fv.eof()) break;
            fv.get();
            fv.getline(v.nombre_cliente, 40, ';');
            fv.get();
            fv >> v.codigo_producto;
            fv.get();
            fv >> v.cantidad;
            fv.get();

            if (v.codigo_producto == p.codigo)
                cantidadVendida += v.cantidad;
        }

        float total = cantidadVendida * p.precio;

        cout << p.codigo << "     "
             << p.nombre << "     "
             << p.cantidad_inicial << "       "
             << p.precio << "     "
             << cantidadVendida << "       "
             << total << endl;
    }
}

void buscarProducto()
{
    int codigo;
    cout << "Ingrese codigo: ";
    cin >> codigo;

    ifstream file("PRODUCTOS.BIN", ios::binary);
    if (!file)
    {
        cout << "No hay productos registrados.\n";
        return;
    }

    Producto p;

    while (file.read((char*)&p, sizeof(Producto)))
    {
        if (p.codigo == codigo)
        {
            cout << "Producto encontrado:\n";
            cout << "Nombre: " << p.nombre << endl;
            cout << "Cantidad: " << p.cantidad_inicial << endl;
            cout << "Precio: " << p.precio << endl;
            return;
        }
    }

    cout << "No existe un producto con ese codigo.\n";
}

void modificarProducto()
{
    int codigo;
    cout << "Codigo a modificar: ";
    cin >> codigo;

    fstream file("PRODUCTOS.BIN", ios::binary | ios::in | ios::out);
    if (!file)
    {
        cout << "No hay productos registrados.\n";
        return;
    }

    Producto p;

    while (file.read((char*)&p, sizeof(Producto)))
    {
        if (p.codigo == codigo)
        {
            cout << "Nuevo nombre: ";
            cin.ignore();
            cin.getline(p.nombre, 30);
            cout << "Nueva cantidad inicial: ";
            cin >> p.cantidad_inicial;
            cout << "Nuevo precio: ";
            cin >> p.precio;

            file.seekp(-sizeof(Producto), ios::cur);
            file.write((char*)&p, sizeof(Producto));

            cout << "Producto modificado.\n";
            return;
        }
    }

    cout << "No existe un producto con ese codigo.\n";
}

void adicionarVenta()
{
    Venta v;

    cout << "CI cliente: ";
    cin.ignore();
    cin.getline(v.ci, 20);

    cout << "Nombre cliente: ";
    cin.getline(v.nombre_cliente, 40);

    cout << "Codigo producto comprado: ";
    cin >> v.codigo_producto;

    if (!existeProducto(v.codigo_producto))
    {
        cout << "No existe un producto con ese codigo.\n";
        return;
    }

    cout << "Cantidad comprada: ";
    cin >> v.cantidad;

    ofstream file("VENTAS.txt", ios::app);
    file << v.ci << "; "
         << v.nombre_cliente << "; "
         << v.codigo_producto << "; "
         << v.cantidad << "\n";

    cout << "Venta registrada.\n";
}

int main()
{
    int opc;

    do
    {
        cout << "\nMENU PRODUCTOS CHAVEZ\n";
        cout << "1. Adicionar Producto\n";
        cout << "2. Listado de Productos\n";
        cout << "3. Buscar Producto por codigo\n";
        cout << "4. Modificar Producto\n";
        cout << "5. Adicionar ventas del producto\n";
        cout << "6. Salir\n";
        cout << "Opcion: ";
        cin >> opc;

        switch (opc)
        {
        case 1: adicionarProducto(); break;
        case 2: listadoProductos(); break;
        case 3: buscarProducto(); break;
        case 4: modificarProducto(); break;
        case 5: adicionarVenta(); break;
        }
    }
    while (opc != 6);

    return 0;
}
