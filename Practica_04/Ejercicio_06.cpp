// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 17/09/2025
// Número de ejercicio: 6

#include <iostream>
using namespace std;

bool prime(int n) 
{
    if (n <= 1) 
	{
		return false;
	}
    for (int i = 2; i * i <= n; i++) 
	{
        if (n % i == 0) 
        {
        	return false;
		}
    }
    return true;
}

int noZero(int n) 
{
    int add = 0;
    while (n > 0) 
	{
        int dig = n % 10;
        if (dig != 0)
		{
			add += dig;
		}
        n /= 10;
    }
    return add;
}

int main() 
{
    int num, add;
    cout << "Ingresa un numero entero: ";
    cin >> num;

    add = noZero(num);

    cout << "La suma de los digitos distintos de cero es: " << add << endl;

    if (prime(add))
    {
    	cout << "La suma es un numero primo." << endl;
	}
    else
    {
    	cout << "La suma no es un numero primo." << endl;
	}

    return 0;
}

