// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Carnet: 6963195 L.P.
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 08/09/2025
// Número de ejercicio: 7

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    srand(time(0));

    int n;
    cout << "Ingrese el numero total de ninos: ";
    cin >> n;

    int n1 = rand() % (n + 1);          
    int n2 = rand() % (n - n1 + 1);     
    int n3 = n - n1 - n2;               

    int diapers = n1 * 6 + n2 * 3 + n3 * 2;

    cout << "Ninos de 1 anio: " << n1 << endl;
    cout << "Ninos de 2 anios: " << n2 << endl;
    cout << "Ninos de 3 anios: " << n3 << endl;
    cout << "Consumo total de panales por dia: " << diapers << endl;

    return 0;
}

