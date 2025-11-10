// Materia: Programación I, Paralelo 4
// Autor: Sebastian Salvador Birbuet
// Fecha creación: 08/11/2025
// Número de ejercicio: 2
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("word.txt");
    if (!file.is_open()) 
    {
        cout << "Error al abrir el archivo." << endl;
        return 1;
    }

    string word;
    int counter = 0;

    while (file >> word) 
    {
        counter++;
    }

    file.close();

    cout << "El archivo posee un total de " << counter << " palabras." << endl;

    return 0;
}