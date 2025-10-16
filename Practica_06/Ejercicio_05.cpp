// Materia: Programación I, Paralelo 1
// Autor: Sebastián Birbuet
// Fecha creación: 07/10/2024
// Número de ejercicio: 5

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int n1, n2;
    cout << "Cantidad de clientes de la primera empresa: ";
    cin >> n1;

    vector<string> enterprise1(n1);
    cout << "Ingresa los nombres de los clientes de la primera empresa:\n";
    for (int i = 0; i < n1; i++) 
    {
        cin >> enterprise1[i];
    }

    cout << "\nCantidad de clientes de la segunda empresa: ";
    cin >> n2;

    vector<string> enterprise2(n2);
    cout << "Ingresa los nombres de los clientes de la segunda empresa:\n";
    for (int i = 0; i < n2; i++) 
    {
        cin >> enterprise2[i];
    }

    vector<string> commons;

    // Buscar intersección
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (enterprise1[i] == enterprise2[j]) {
                commons.push_back(enterprise1[i]);
                break;
            }
        }
    }

    if (commons.empty()) {
        cout << "\nNo hay clientes en comun.\n";
    } else {
        cout << "\nClientes en comun:\n";
        for (int i = 0; i < commons.size(); i++) {
            cout << commons[i] << "\n";
        }
        cout << "Total: " << commons.size() << " clientes en comun.\n";
    }

    return 0;
}
