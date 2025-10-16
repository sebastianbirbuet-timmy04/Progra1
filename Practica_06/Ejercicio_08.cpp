// Materia: Programación I, Paralelo 1
// Autor: Sebastián Birbuet
// Fecha creación: 08/10/2024
// Número de ejercicio: 8

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main() 
{
    string mail;
    cout << "Ingresa una direccion de correo electronico: ";
    cin >> mail;

    int posArroba = -1;
    int conteoArroba = 0;

    for (int i = 0; i < mail.size(); i++) 
    {
        if (mail[i] == '@') 
        {
            conteoArroba++;
            posArroba = i;
        }
    }

    bool valid = true;

    if (conteoArroba != 1) 
    {
        valid = false;
    } 
    else 
    {
        bool after = false;
        for (int i = posArroba + 1; i < mail.size(); i++) 
        {
            if (mail[i] == '.') 
            {
                after = true;
                break;
            }
        }
        if (!after) valid = false;
    }

    if (valid)
        cout << "Correo electronico valido\n";
    else
        cout << "Correo electronico invalido\n";

    return 0;
}
