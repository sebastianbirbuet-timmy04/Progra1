// Materia: Programación I, Paralelo 4
// Autor: Sebastian Salvador Birbuet
// Fecha creación: 08/11/2025
// Número de ejercicio: 1

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream exit("nombres.txt");
    if (!exit) 
    {
        cout << "Error al abrir el archivo para escritura." << endl;
        return 1;
    }

    int n, i;
    string name;
    cout << "Ingresa la cantidad de nombres a guardar: ";
    cin >> n;
    cin.ignore(); 

    for (i = 0; i < n; i++) 
    {
        cout << "Ingresa el nombre " << (i + 1) << ": ";
        getline(cin, name);
        exit << name << endl;
    }

    exit.close();

    ifstream entry("nombres.txt");
    if (!entry) 
    {
        cout << "Error al abrir el archivo para lectura." << endl;
        return 1;
    }

    cout << "\n-------NOMBRES GUARDADOS-------" << endl;
    string line;
    while (getline(entry, line)) 
    {
        cout << line << endl;
    }

    entry.close();
    
    return 0;
}