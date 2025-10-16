// Materia: Programación I, Paralelo 1
// Autor: Sebastián Birbuet
// Fecha creación: 15/10/2024
// Número de ejercicio: 12

#include <iostream>
#include <string>
using namespace std;

char toLower(char c) 
{
    if (c >= 'A' && c <= 'Z')
    {
        c = c + ('a' - 'A');
    }
    return c;
}

char normalize(char c) 
{
    c = toLower(c);
    switch (c) 
    {
        case 'á': case 'à': case 'ä': case 'â': return 'a';
        case 'é': case 'è': case 'ë': case 'ê': return 'e';
        case 'í': case 'ì': case 'ï': case 'î': return 'i';
        case 'ó': case 'ò': case 'ö': case 'ô': return 'o';
        case 'ú': case 'ù': case 'ü': case 'û': return 'u';
        default: return c;
    }
}

string limpiarTexto(const string &texto) {
    string clean;
    for (char c : texto) 
    {
        c = normalize(c);
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
        {
            c = toLower(c);
            clean += c;
        }
    }
    return clean;
}

bool palindrome(const string &text) 
{
    string clean = limpiarTexto(text);
    int i = 0, j = clean.size() - 1;
    while (i < j) 
    {
        if (clean[i] != clean[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() 
{
    string text;
    cout << "Ingresa un texto: ";
    getline(cin, text);
    if (palindrome(text))
    {
        cout << "Es un palindromo" << endl;
    }
    else
    {
        cout << "No es un palindromo" << endl;
    }
    return 0;
}
