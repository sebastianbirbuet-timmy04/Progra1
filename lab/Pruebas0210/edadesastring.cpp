#include <iostream>
#include <string>

using namespace std;

int main()
{
	int age = 0;
	string name = "";
	cout << "Ingresa tu edad: ";
	cin >> age;
	cin.ignore(); // Para no confundir al buffer de entrada :)
	cout << "ingresa tu nombre: ";
	getline(cin, name);
	cout << "El usuario se llama " << name << " y tiene " << age << " anios.";
	
	return 0;
}
