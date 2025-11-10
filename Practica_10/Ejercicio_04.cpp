// Materia: Programación I, Paralelo 4
// Autor: Sebastian Salvador Birbuet
// Fecha creación: 08/11/2025
// Número de ejercicio: 4
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("datos.txt");
    if (!file.is_open())
    {
        cout << "Error al abrir el archivo." << endl;
        return 1;
    }

    string searchTerm;
    cout << "Ingresa la palabra o frase que quieres buscar: ";
    getline(cin, searchTerm);

    string line;
    int count = 0;

    while (getline(file, line))
    {
        size_t pos = line.find(searchTerm);
        while (pos != string::npos)
        {
            count++;
            pos = line.find(searchTerm, pos + searchTerm.length());
        }
    }

    file.close();

    cout << "La palabra o frase \"" << searchTerm << "\" aparece " << count << " veces en el archivo." << endl;

    return 0;
}
