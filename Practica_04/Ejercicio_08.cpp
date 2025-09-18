// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 17/09/2025
// Número de ejercicio: 8

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    int n;
    double price, sales = 0.0, ivaT = 0.0;

    cout << "Ingrese la cantidad de productos vendidos: ";
    cin >> n;

    srand(time(0));

    for (int i = 1; i <= n; i++) 
	{
        price = 20 + rand() % 31;
        double iva = price * 0.13;
        double ivaPrice = price + iva;
        if (ivaPrice > 2500) 
		{
            ivaPrice *= 0.95;
        }
        sales += ivaPrice;
        ivaT += iva;
        cout << "Producto " << i << ": Precio = " << price 
             << ", Precio con IVA = " << ivaPrice << endl;
    }

    cout << "Suma total de ventas del dia: " << sales << " Bs" << endl;
    cout << "Pago de IVA al Servicio de Impuestos Nacionales: " << ivaT << " Bs" << endl;

    return 0;
}

