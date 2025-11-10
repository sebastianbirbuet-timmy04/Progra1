// Materia: Programación I, Paralelo 4
// Autor: Sebastian Salvador Birbuet
// Fecha creación: 09/11/2025
// Número de ejercicio: 6
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct City
{
    string name;
    float temperature;
};

int main()
{
    ifstream inFile("temperaturas.txt");
    if (!inFile.is_open())
    {
        cout << "Error al abrir el archivo temperaturas.txt" << endl;
        return 1;
    }

    vector<City> cities;
    string cityName;
    float temp;

    while (inFile >> cityName >> temp)
    {
        City city;
        city.name = cityName;
        city.temperature = temp;
        cities.push_back(city);
    }

    inFile.close();

    float threshold;
    cout << "Ingresa la temperatura minima N: ";
    cin >> threshold;

    ofstream outFile("altas_temperaturas.txt");
    if (!outFile.is_open())
    {
        cout << "Error al crear el archivo altas_temperaturas.txt" << endl;
        return 1;
    }

    for (size_t i = 0; i < cities.size(); ++i)
    {
        if (cities[i].temperature > threshold)
        {
            outFile << cities[i].name << " " << cities[i].temperature << endl;
        }
    }

    outFile.close();

    cout << "Archivo altas_temperaturas.txt generado con exito." << endl;

    return 0;
}
