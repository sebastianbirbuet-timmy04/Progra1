#include <iostream>
using namespace std;
int main()
{
	int value1, value2;
	cout << "Por favor, ingresa el valor 1: ";
	cin >> value1;
	cout << "Por favor, ingresa el valor 2: ";
	cin >> value2;
	if (value1 > value2)
	{
		cout << value1 << " es mayor que " << value2;
	}
	else
	{
		if (value1 == value2)
		{
			cout << value1 << " es igual que " << value2;
		}
		else
		{
			cout << value1 << " es menor que " << value2;
		}
	}
	return 0;
}
