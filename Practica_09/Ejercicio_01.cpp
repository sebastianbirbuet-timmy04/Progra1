// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 28/10/2025
// Número de ejercicio: 1

#include <iostream>
#include <string>
using namespace std;

// Definición de la estructura Libro
struct Libro 
{
    string titulo;
    string autor;
    int anio_publicacion;
    bool disponible;
};

int main() 
{
    Libro book;

    cout << "=== REGISTRO DE LIBRO ===" << endl;
    cout << "Ingresa el título del libro: ";
    getline(cin, book.titulo);

    cout << "Ingresa el autor del libro: ";
    getline(cin, book.autor);

    cout << "Ingresa el año de publicación: ";
    cin >> book.anio_publicacion;

    cout << "¿El libro está disponible? (1 = Sí, 0 = No): ";
    cin >> book.disponible;

    cout << "\n=== DATOS DEL LIBRO REGISTRADO ===" << endl;
    cout << "Título: " << book.titulo << endl;
    cout << "Autor: " << book.autor << endl;
    cout << "Año de publicación: " << book.anio_publicacion << endl;
    cout << "Estado: " << (book.disponible ? "Disponible" : "No disponible") << endl;

    return 0;
}
