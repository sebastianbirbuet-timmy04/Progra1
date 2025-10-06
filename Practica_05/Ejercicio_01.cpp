// Materia: Programación I, Paralelo 4
// Autor: Sebastian Salvador Birbuet
// Carnet: 6963195
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 02/10/2025
// Número de ejercicio: 1
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;    

vector<double> voltmaker();
vector<double> tempmaker();
vector<char> charmaker();
vector<int> yearmaker();
vector<double> speedmaker();
vector<double> distancemaker();

int main() {
    
    srand(time(0)); 

    vector<double> volt = voltmaker();
    vector<double> temp = tempmaker();
    vector<char> characters = charmaker();
    vector<int> years = yearmaker();
    vector<double> speed = speedmaker();
    
    vector<double> distance = distancemaker();

    cout << "Primeros 5 voltajes: ";
    for (int i = 0; i < 5; i++)
    {
        cout << volt[i] << "V ";
    }
    
    cout << endl;

    cout << "Primeras 5 temperaturas: ";
    for (int i = 0; i < 5; i++)
    {
        cout << temp[i] << "°C ";
    }
    
    cout << endl;

    cout << "Primeros 10 caracteres: ";
    for (int i = 0; i < 10; i++)
    {
        cout << characters[i] << " ";
    }
    
    cout << endl;

    cout << "Primeros 5 anios: ";
    for (int i = 0; i < 5; i++)
    {
        cout << years[i] << " ";
    }
    cout << endl;

    cout << "Primeras 5 velocidades: ";
    for (int i = 0; i < 5; i++)
    {
        cout << speed[i] << " km/h ";
    }
    cout << endl;

    cout << "Primeras 5 distancias: ";
    for (int i = 0; i < 5; i++)
    {
        cout << distance[i] << " m ";
    }
 
    cout << endl;

    return 0;
}


vector<double> voltmaker() 
{
    vector<double> volt(100);
    for (int i = 0; i < 100; i++) 
    {
        volt[i] = 20.0 + (rand() / (double)RAND_MAX) * (220.0 - 20.0);
    }
    return volt;
}

vector<double> tempmaker() 
{
    vector<double> temp(50);
    for (int i = 0; i < 50; i++)
    {
        temp[i] = (rand() / (double)RAND_MAX) * 100.0;
    }
    return temp;
}


vector<char> charmaker() 
{
    vector<char> characters(30);
    for (int i = 0; i < 30; i++)
    {
        int tipo = rand() % 3; 
        if (tipo == 0)
            characters[i] = '0' + rand() % 10;
        else if (tipo == 1)
            characters[i] = 'A' + rand() % 26;
 
        else
            characters[i] = 'a' + rand() % 26;
    }
    return characters;
}


vector<int> yearmaker() 
{
    vector<int> years(100);
 
    for (int i = 0; i < 100; i++)
    {
        years[i] = 1990 + rand() % (2025 - 1990 + 1);
    }
    return years;
}

vector<double> speedmaker() 
{
    vector<double> speed(32);
    for (int i = 0; i < 32; i++)
    {
        speed[i] = 10.0 + (rand() / (double)RAND_MAX) * (300.0 - 10.0);
    }
    return speed;
}

vector<double> distancemaker() 
{
    vector<double> distance(1000);
    for (int i = 0; i < 1000; i++)
    {
        distance[i] = 1.0 + (rand() / (double)RAND_MAX) * (1000.0 - 1.0);
    }
    return distance;
}

