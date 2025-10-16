// Materia: Programación I, Paralelo 1
// Autor: Sebastián Birbuet
// Fecha creación: 15/10/2024
// Número de ejercicio: 14

#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{
    char phrase[30];
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    cout << "Ingresa una frase: ";
    cin.getline(phrase, 30, '\n');

    for (int j = 0; phrase[j] != '\0'; j++)
    {
        char c = phrase[j];
        switch (c)
        {
            case 'a':
            case 'A':
                a++;
                break;
            case 'e':
            case 'E':
                e++;
                break;
            case 'i':
            case 'I':
                i++;
                break;
            case 'o':
            case 'O':
                o++;
                break;
            case 'u':
            case 'U':
                u++;
                break;
            default:
                break;
        }
    }

    cout << "Cantidad de vocales:" << endl;
    cout << "A: " << a << endl; 
    cout << "E: " << e << endl;
    cout << "I: " << i << endl;
    cout << "O: " << o << endl;
    cout << "U: " << u << endl;

    return 0;
}