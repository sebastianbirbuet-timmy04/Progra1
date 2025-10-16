// Materia: Programación I, Paralelo 1
// Autor: Sebastián Birbuet
// Fecha creación: 15/10/2024
// Número de ejercicio: 11

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() 
{
    string text;
    char separator;

    cout << "Ingresa la cadena: ";
    getline(cin, text);

    cout << "Ingresa el delimitador: ";
    cin >> separator;

    string token;
    stringstream ss(text);

    while (getline(ss, token, separator)) 
    {
        cout << token << endl;
    }

    return 0;
}
