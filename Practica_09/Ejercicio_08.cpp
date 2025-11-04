// Materia: Programación I, Paralelo 4
// Autor: Sebastián Salvador Birbuet
// Fecha creación: 03/10/2025
// Número de ejercicio: 8

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Atleta 
{
    string nombre;
    string departamento;
    string deporte;
    int medallas;
};

int main() 
{
    int n;

    cout << "=== OLIMPIADA NACIONAL ===" << endl;
    cout << "Ingrese la cantidad de atletas: ";
    cin >> n;
    cin.ignore();

    if (n <= 0) 
    {
        cout << "No se ingresaron atletas." << endl;
        return 0;
    }

    vector<Atleta> athlete(n);

    for (int i = 0; i < n; i++) 
    {
        cout << "\n--- Atleta " << i + 1 << " ---" << endl;

        cout << "Nombre: ";
        getline(cin, athlete[i].nombre);

        cout << "Departamento: ";
        getline(cin, athlete[i].departamento);

        cout << "Deporte (Tiro con arco, Atletismo, Boxeo, Ciclismo, Natación, Esgrima): ";
        getline(cin, athlete[i].deporte);

        cout << "Cantidad de medallas ganadas: ";
        cin >> athlete[i].medallas;
        cin.ignore();
    }

    vector<string> departamentos;
    vector<int> total_medallas;

    for (int i = 0; i < n; i++) 
    {
        bool found = false;
        for (int j = 0; j < departamentos.size(); j++) 
        {
            if (athlete[i].departamento == departamentos[j]) 
            {
                total_medallas[j] += athlete[i].medallas;
                found = true;
                break;
            }
        }

        if (!found) 
        {
            departamentos.push_back(athlete[i].departamento);
            total_medallas.push_back(athlete[i].medallas);
        }
    }

    cout << "\n=== MEDALLERO FINAL POR DEPARTAMENTO ===" << endl;
    for (int i = 0; i < departamentos.size(); i++) 
    {
        cout << departamentos[i] << ": " << total_medallas[i] << " medallas" << endl;
    }

    return 0;
}
