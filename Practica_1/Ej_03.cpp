#include <iostream>
using namespace std;

int main()
{
	int day;
	system ("chcp 65001");
	system ("cls");
	cout << "Por favor, ingresa un numero del 1 al 7 para evaluar el dia: ";
	cin >> day;
	switch (day)
	{
		case 1:
			cout << "Lunes";
			break;
		case 2:
			cout << "Martes";
			break;
		case 3:
			cout << "Miercoles";
			break;
		case 4:
			cout << "Jueves";
			break;
		case 5:
			cout << "Viernes";
			break;
		case 6:
			cout << "Sabado";
			break;
		case 7:
			cout << "Domingo";
			break;
		default:
			cout << "Error, valor de dia invalido.";
			break;
			
	}
	return 0;
}
