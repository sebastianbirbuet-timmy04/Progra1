// Materia: Programación I, Paralelo 4
// Autor: Sebastian Salvador Birbuet
// Carnet: 6963195
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 02/10/2025
// Número de ejercicio: 2

#include <iostream>
#include <vector>


using namespace std;

int main()
{
	vector<double> voltios = {11.95, 16.32, 12.15,
							  8.22, 15.98, 26.22,
							  13.54, 6.45, 17.59};

	for (size_t i = 0; i < voltios.size(); ++i)
	{
		cout << voltios[i];
		if ((i + 1) % 3 == 0)
		{
			cout << '\n';
		}
		else
		{
			cout << ' ';
		}
	}

	return 0;
}