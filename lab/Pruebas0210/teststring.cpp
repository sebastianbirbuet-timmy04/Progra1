#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	cout << "Ingresa tu nombre: ";
	getline(cin, name);
	cout << "Te llamare " << name << "." << endl;
	cout << "Te llamare " << name.insert(1, " ") << " mientras use 'insert'." << endl;
	cout << "Te llamare " << name.erase(1, 2) << " mientras use 'erase'." << endl;
	cout << "Te llamare " << name.replace(1, 2, "FINO") << " mientras use 'replace'." << endl;
	cout << "Te llamare " << name.erase(1, 2) << " mientras use 'erase'." << endl;
	cout << "Te llamare " << name.substr(3, 2) << " mientras use 'SubStr'." << endl;
	cout << "Tu nombre posee " << name.size() << " caracteres.";
	
	return 0;
}
