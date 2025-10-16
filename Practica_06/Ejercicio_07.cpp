// Materia: Programación I, Paralelo 1
// Autor: Sebastián Birbuet
// Fecha creación: 07/10/2024
// Número de ejercicio: 7

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
    cout << "Ingrese la cantidad de pixeles de la imagen: ";
    cin >> N;

    vector<int> pixels(N);
    srand(time(0)); 
    for (int i = 0; i < N; i++) 
    {
        pixels[i] = rand() % 256;
    }

    const int RANGES = 26;
    vector<int> counter(RANGES, 0);


    for (int i = 0; i < N; i++) 
    {
        int value = pixels[i];
        int index = value / 10;
        if (index > 25) index = 25; 
        counter[index]++;
    }

    
    cout << "\nDistribucion de pixeles por rango de intensidad:\n";
    for (int i = 0; i < RANGES; i++) 
    {
        int start = i * 10;
        int end = (i == 25) ? 255 : start + 9;
        cout << start << "-" << end << ": " << counter[i] << " pixeles\n";
    }

    return 0;
}
