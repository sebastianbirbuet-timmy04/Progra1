// Materia: Programación I, Paralelo 4
// Autor: Sebastian Salvador Birbuet
// Fecha creación: 08/11/2025
// Número de ejercicio: 5
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Product
{
    string name;
    float price;
};

int main()
{
    ifstream inFile("productos.txt");
    if (!inFile.is_open())
    {
        cout << "Error al abrir el archivo productos.txt" << endl;
        return 1;
    }

    vector<Product> products;
    string prodName;
    float prodPrice;

    // Leer productos del archivo
    while (inFile >> prodName >> prodPrice)
    {
        Product prod;
        prod.name = prodName;
        prod.price = prodPrice;
        products.push_back(prod);
    }

    inFile.close();

    string productName;
    float newPrice;
    cout << "Ingrese el nombre del producto a actualizar: ";
    cin >> productName;
    cout << "Ingrese el nuevo precio: ";
    cin >> newPrice;

    bool found = false;
    for (size_t i = 0; i < products.size(); ++i)
    {
        if (products[i].name == productName)
        {
            products[i].price = newPrice;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "El producto \"" << productName << "\" no existe en el archivo." << endl;
    }
    else
    {
        ofstream outFile("productos.txt");
        if (!outFile.is_open())
        {
            cout << "Error al abrir el archivo para actualizar." << endl;
            return 1;
        }

        for (size_t i = 0; i < products.size(); ++i)
        {
            outFile << products[i].name << " " << products[i].price << endl;
        }

        outFile.close();
        cout << "El precio del producto \"" << productName << "\" ha sido actualizado." << endl;
    }

    return 0;
}
