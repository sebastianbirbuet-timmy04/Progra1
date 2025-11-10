// Materia: Programación I, Paralelo 4
// Autor: Sebastian Salvador Birbuet
// Fecha creación: 08/11/2025
// Número de ejercicio: 3
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Student
{
    string name;
    int age;
    float avg;
};

int main()
{
    ofstream file("estudiantes.txt");
    if (!file.is_open())
    {
        cout << "Error al crear el archivo." << endl;
        return 1;
    }

    int numberOfStudents;
    cout << "¿Cuántos estudiantes deseas registrar? ";
    cin >> numberOfStudents;
    cin.ignore();

    for (int i = 0; i < numberOfStudents; ++i)
    {
        Student student;
        cout << "Nombre del estudiante #" << i + 1 << ": ";
        getline(cin, student.name);
        cout << "Edad: ";
        cin >> student.age;
        cout << "Promedio: ";
        cin >> student.avg;
        cin.ignore();

        file << student.name << " " << student.age << " " << student.avg << endl;
    }

    file.close();

    ifstream fileEntrada("estudiantes.txt");
    if (!fileEntrada.is_open())
    {
        cout << "Error al abrir el archivo para lectura." << endl;
        return 1;
    }

    cout << "\n--- LISTA DE ESTUDIANTES ---\n";

    Student student;
    while (fileEntrada >> student.name >> student.age >> student.avg)
    {
        cout << "Nombre: " << student.name << ", Edad: " << student.age << ", Promedio: " << student.avg << endl;
    }

    fileEntrada.close();

    return 0;
}
