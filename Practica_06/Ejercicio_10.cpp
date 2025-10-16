// Materia: Programación I, Paralelo 1
// Autor: Sebastián Birbuet
// Fecha creación: 08/10/2024
// Número de ejercicio: 10

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main() 
{
    string text;
    cout << "Ingresa una cadena de texto: ";
    getline(cin, text);

    string result = "";

    for (int i = 0; i < text.size(); i++) 
    {
        if (text[i] < '0' || text[i] > '9') 
        { 
            result += text[i];
        }
    }

    cout << "Cadena sin digitos: " << result << "\n";

    return 0;
}
