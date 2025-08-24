#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Por favor, ingresa un numero entero: ";
	cin >> number;
	
	if (number % 2 == 0)
	{
		cout << number;
		cout << " es par.";
	}
	else
	{
		cout << number;
		cout << " es impar.";
	}
	
	return 0;
}
