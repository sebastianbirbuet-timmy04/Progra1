// Materia: Programación I, Paralelo 4
// Autor: Sebastian Salvador Birbuet
// Fecha creación: 10/11/2025
// Número de ejercicio: 7
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inFile("calificaciones.txt");
    if (!inFile.is_open())
    {
        cout << "Error al abrir el archivo calificaciones.txt" << endl;
        return 1;
    }

    ofstream outFile("promedios.txt");
    if (!outFile.is_open())
    {
        cout << "Error al crear el archivo promedios.txt" << endl;
        return 1;
    }

    string studentName;
    float grade1, grade2, grade3, grade4, grade5; // asumimos max 5 calificaciones
    while (inFile >> studentName >> grade1 >> grade2 >> grade3 >> grade4 >> grade5)
    {
        float sum = 0;
        int count = 0;

        if (grade1 >= 0) { sum += grade1; count++; }
        if (grade2 >= 0) { sum += grade2; count++; }
        if (grade3 >= 0) { sum += grade3; count++; }
        if (grade4 >= 0) { sum += grade4; count++; }
        if (grade5 >= 0) { sum += grade5; count++; }

        float average = (count > 0) ? (sum / count) : 0;
        outFile << studentName << " " << average << endl;
    }

    inFile.close();
    outFile.close();

    cout << "Archivo promedios.txt generado con exito." << endl;

    return 0;
}
