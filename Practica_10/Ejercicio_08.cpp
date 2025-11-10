// Materia: Programación I, Paralelo 4
// Autor: Sebastian Salvador Birbuet
// Fecha creación: 10/11/2025
// Número de ejercicio: 8
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inFile("documento.txt");
    if (!inFile.is_open())
    {
        cout << "Error al abrir el archivo documento.txt" << endl;
        return 1;
    }

    string word;
    int lineCount = 0;
    int wordCount = 0;
    int charCount = 0;
    string line;

    while (getline(inFile, line))
    {
        lineCount++;
        charCount += line.length();

        size_t pos = 0;
        while (pos < line.length())
        {
            while (pos < line.length() && line[pos] == ' ')
            {
                pos++;
            }

            if (pos < line.length())
            {
                wordCount++;
                while (pos < line.length() && line[pos] != ' ')
                {
                    pos++;
                }
            }
        }
    }

    inFile.close();

    cout << "Numero de lineas: " << lineCount << endl;
    cout << "Numero de palabras: " << wordCount << endl;
    cout << "Numero de caracteres: " << charCount << endl;

    return 0;
}
