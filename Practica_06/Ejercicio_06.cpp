// Materia: Programación I, Paralelo 1
// Autor: Sebastián Birbuet
// Fecha creación: 07/10/2024
// Número de ejercicio: 6

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() 
{
    int N;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> N;

    vector<int> scores(N);
    srand(time(0));


    for (int i = 0; i < N; i++) 
    {
        scores[i] = rand() % 101;
    }


    int reprobado = 0, regular = 0, bueno = 0, excelente = 0;

    for (int i = 0; i < N; i++) 
    {
        int score = scores[i];
        if (score < 60)
            reprobado++;
        else if (score < 80)
            regular++;
        else if (score < 90)
            bueno++;
        else
            excelente++;
    }

    
    double pReprobado = (reprobado * 100.0) / N;
    double pRegular = (regular * 100.0) / N;
    double pBueno = (bueno * 100.0) / N;
    double pExcelente = (excelente * 100.0) / N;

    
    cout << "\nCalificaciones generadas:\n";
    for (int i = 0; i < N; i++) 
    {
        cout << scores[i] << " ";
    }

    cout << "\n\nResultados:\n";
    cout << "Reprobado (0-59): " << pReprobado << "%\n";
    cout << "Regular (60-79): " << pRegular << "%\n";
    cout << "Bueno (80-89): " << pBueno << "%\n";
    cout << "Excelente (90-100): " << pExcelente << "%\n";

    return 0;
}
