// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 30/10/2025
// Número de ejercicio: 5

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Pelicula 
{
    string titulo;
    string director;
    int duracion; 
    int anio_estreno;
    string genero;
};

int main() 
{
    int n;

    cout << "=== SISTEMA DE GESTIÓN DE PELÍCULAS ===" << endl;
    cout << "Ingrese la cantidad de películas: ";
    cin >> n;
    cin.ignore();

    if (n <= 0) 
    {
        cout << "No se ingresaron películas." << endl;
        return 0;
    }

    vector<Pelicula> movie(n);

    
    for (int i = 0; i < n; i++) 
    {
        cout << "\n--- Película " << i + 1 << " ---" << endl;

        cout << "Título: ";
        getline(cin, movie[i].titulo);

        cout << "Director: ";
        getline(cin, movie[i].director);

        cout << "Duración (en minutos): ";
        cin >> movie[i].duracion;

        cout << "Año de estreno: ";
        cin >> movie[i].anio_estreno;
        cin.ignore();

        cout << "Género: ";
        getline(cin, movie[i].genero);
    }

    string genre;
    cout << "\nIngrese el género que desea buscar: ";
    getline(cin, genre);

    cout << "\n=== PELÍCULAS DEL GÉNERO \"" << genre << "\" ===" << endl;
    bool found = false;
    for (int i = 0; i < n; i++) 
    {
        if (movie[i].genero == genre) 
        {
            cout << "\nTítulo: " << movie[i].titulo << endl;
            cout << "Director: " << movie[i].director << endl;
            cout << "Duración: " << movie[i].duracion << " minutos" << endl;
            cout << "Año de estreno: " << movie[i].anio_estreno << endl;
            genre = true;
        }
    }
    if (!found) 
    {
        cout << "No se encontraron películas de ese género." << endl;
    }

    
    string director_search;
    cout << "\nIngrese el director que desea buscar: ";
    getline(cin, director_search);

    cout << "\n=== PELÍCULAS DIRIGIDAS POR \"" << director_search << "\" ===" << endl;
    bool find = false;
    for (int i = 0; i < n; i++) 
    {
        if (movie[i].director == director_search) 
        {
            cout << "\nTítulo: " << movie[i].titulo << endl;
            cout << "Género: " << movie[i].genero << endl;
            cout << "Duración: " << movie[i].duracion << " minutos" << endl;
            cout << "Año de estreno: " << movie[i].anio_estreno << endl;
            find = true;
        }
    }
    if (!find) 
    {
        cout << "No se encontraron películas de ese director." << endl;
    }

    return 0;
}
