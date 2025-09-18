// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 17/09/2025
// Número de ejercicio: 1

#include <iostream>
using namespace std;

void intercambiarValores(int &v1, int &v2)
{
	int val = v1;
	v1 = v2;
	v2 = val;
}

int main()
{
	int x, y;
	cout << "Por favor, ingresa el primer valor: ";
	cin >> x;
	cout << "Ahora ingresa el segundo valor: ";
	cin >> y;
	
	cout << "Valores antes del intercambio: " << endl;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	
	intercambiarValores(x, y);
	
	cout << "Valores despues del intercambio: " << endl;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	
	return 0;
}
