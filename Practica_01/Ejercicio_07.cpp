#include <iostream>
using namespace std;

int main()
{
	char input;
	cout << "Por favor, ingresa un caracter: ";
	cin >> input;
	if (input >= 'A' and input <= 'Z' or input >= 'a' and input <= 'z')
	{
		if (input == 'a' or input == 'e' or input == 'i' or input == 'o' or input == 'u')
		{ 
			cout << input;
			cout << " es una vocal.";
		}
		else
		{
			if (input == 'A' or input == 'E' or input == 'I' or input == 'O' or input == 'U')
			{
				cout << input;
				cout << " es una vocal.";
			}	
			else
			{
				cout << input;
				cout << " es una consonante.";
			}
		}
	}
	else
	{
		cout << input;
		cout << " es un caracter especial.";
	}
	
	return 0;
}
