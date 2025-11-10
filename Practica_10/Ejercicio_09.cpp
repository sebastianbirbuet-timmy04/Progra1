// Materia: Programación I, Paralelo 4
// Autor: Sebastian Salvador Birbuet
// Fecha creación: 10/11/2025
// Número de ejercicio: 9
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inFile("mensaje.txt");
    if (!inFile.is_open())
    {
        cout << "Error al abrir el archivo mensaje.txt" << endl;
        return 1;
    }

    ofstream outFile("mensaje_cifrado.txt");
    if (!outFile.is_open())
    {
        cout << "Error al crear el archivo mensaje_cifrado.txt" << endl;
        return 1;
    }

    char ch;
    while (inFile.get(ch))
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ((ch - 'A' + 3) % 26) + 'A';
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            ch = ((ch - 'a' + 3) % 26) + 'a';
        }

        outFile.put(ch);
    }

    inFile.close();
    outFile.close();

    cout << "Archivo mensaje_cifrado.txt generado con exito." << endl;

    return 0;
}
