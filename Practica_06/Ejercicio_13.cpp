// Materia: Programación I, Paralelo 1
// Autor: Sebastián Birbuet
// Fecha creación: 15/10/2024
// Número de ejercicio: 13

#include <iostream>
#include <string>
using namespace std;

char toUpper(char c) 
{
    if (c >= 'a' && c <= 'z')
        {
            c = c - ('a' - 'A');
        }
    return c;
}

string firstUpper(string text) 
{
    bool newString = true;

    for (int i = 0; i < text.size(); i++) 
    {
        char c = text[i];

        if (c == ' ' || c == '\t' || c == '\n')
            {
                newString = true;
            }
        else 
        {
            if (newString && (c >= 'a' && c <= 'z'))
                {
                    text[i] = toUpper(c);
                }
            newString = false;
        }
    }

    return text;
}

int main() 
{
    string text;
    cout << "Ingresa un texto: ";
    getline(cin, text);

    cout << "Resultado: " << firstUpper(text) << endl;

    return 0;
}
