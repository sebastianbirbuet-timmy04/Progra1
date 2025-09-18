// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 17/09/2025
// Número de ejercicio: 9

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    int numSellers;
    double baseSalary, productPrice, totalSold, commission, totalSalary;

    cout << "Ingrese la cantidad de vendedoras: ";
    cin >> numSellers;

    srand(time(0));

    for (int i = 1; i <= numSellers; i++) 
	{
        cout << "Vendedora " << i << endl;
        cout << "Ingrese el sueldo base: ";
        cin >> baseSalary;

        totalSold = 0.0;
        for (int j = 1; j <= 10; j++) 
		{
            productPrice = 20 + rand() % 31;
            totalSold += productPrice;
        }

        commission = totalSold * 0.10;
        totalSalary = baseSalary + commission;

        cout << "Total vendido: " << totalSold << " Bs" << endl;
        cout << "Comision: " << commission << " Bs" << endl;
        cout << "Sueldo total a pagar: " << totalSalary << " Bs" << endl;
    }

    return 0;
}

