// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 28/10/2025
// Número de ejercicio: 2

#include <iostream>
#include <string>
using namespace std;

struct Atleta 
{
    string nombre;
    string pais;
    int edad;
    int mejor_tiempo; 
};

int main() 
{
    int n;

    cout << "=== REGISTRO DE ATLETAS ===" << endl;
    cout << "Ingresa la cantidad de atletas: ";
    cin >> n;
    cin.ignore(); 

    Atleta athlete[n];


    for (int i = 0; i < n; i++) 
    {
        cout << "\nAtleta " << i + 1 << ":" << endl;

        cout << "Nombre: ";
        getline(cin, athlete[i].nombre);

        cout << "País: ";
        getline(cin, athlete[i].pais);

        cout << "Edad: ";
        cin >> athlete[i].edad;

        cout << "Mejor tiempo (en segundos): ";
        cin >> athlete[i].mejor_tiempo;
        cin.ignore(); 
    }

    
    int best = 0;
    for (int i = 1; i < n; i++) 
    {
        if (athlete[i].mejor_tiempo < athlete[best].mejor_tiempo) 
        {
            best = i;
        }
    }

    cout << "\n=== ATLETA CON EL MEJOR TIEMPO ===" << endl;
    cout << "Nombre: " << athlete[best].nombre << endl;
    cout << "País: " << athlete[best].pais << endl;
    cout << "Tiempo: " << athlete[best].mejor_tiempo << " segundos" << endl;

    return 0;
}
