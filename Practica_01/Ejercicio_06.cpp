#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Por favor, ingresa un numero: ";
	cin >> number;
	
	if (number == 0) 
	{
		cout << "El numero ingresado es igual a ";
		cout << number;
		cout << ".";
	}
	else
	{
		if (number < 0)
		{
			cout << "El numero ";
			cout << number;
			cout << " es negativo.";
		}
		else
		{ 
			cout << "El numero ";
			cout << number;
			cout << " es positivo.";
		}
	}
	
	return 0;
}
