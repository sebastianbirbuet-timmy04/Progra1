// Materia: Programación I, Paralelo 4
// Autor: Sebastián Birbuet
// Fecha creación: 02-12-2025
// Número de ejercicio: 4

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Estudiante
{
    int carnet;
    char nombres[30];
    char apellidos[30];
    char materia[30];
    int paralelo;
    double notaFinal;
    bool tieneNota;
};

void adicionarEstudiante()
{
    Estudiante e;
    cout << "Carnet: ";
    cin >> e.carnet;
    cout << "Nombres: ";
    cin.ignore();
    cin.getline(e.nombres,30);
    cout << "Apellidos: ";
    cin.getline(e.apellidos,30);
    cout << "Materia: ";
    cin.getline(e.materia,30);
    cout << "Paralelo: ";
    cin >> e.paralelo;
    e.notaFinal = 0;
    e.tieneNota = false;

    ofstream f("ESTUDIANTES.BIN", ios::binary | ios::app);
    f.write((char*)&e, sizeof(Estudiante));
    f.close();
}

void listadoEstudiantes()
{
    ifstream f("ESTUDIANTES.BIN", ios::binary);
    Estudiante e;
    double suma = 0;
    int contador = 0;

    cout << "CARNET  NOMBRES  APELLIDOS  MATERIA  PARALELO  NOTA  ESTADO\n";

    while (f.read((char*)&e, sizeof(Estudiante)))
    {
        if (!e.tieneNota) continue;

        cout << e.carnet << " "
             << e.nombres << " "
             << e.apellidos << " "
             << e.materia << " "
             << e.paralelo << " "
             << e.notaFinal << " ";

        bool habil = e.notaFinal >= 60;

        if (habil)
            cout << "HABILITADO\n";
        else
            cout << "NO HABILITADO\n";

        suma += e.notaFinal;
        contador++;
    }

    f.close();

    if (contador > 0)
        cout << "\nPROMEDIO GENERAL: " << suma / contador << endl;
}

void eliminarEstudiante()
{
    int carnet;
    cout << "Carnet a eliminar: ";
    cin >> carnet;

    ifstream f("ESTUDIANTES.BIN", ios::binary);
    ofstream temp("TEMP.BIN", ios::binary);

    Estudiante e;

    while (f.read((char*)&e, sizeof(Estudiante)))
    {
        if (e.carnet != carnet)
            temp.write((char*)&e, sizeof(Estudiante));
    }

    f.close();
    temp.close();

    remove("ESTUDIANTES.BIN");
    rename("TEMP.BIN", "ESTUDIANTES.BIN");
}

void adicionarNotas()
{
    ifstream txt("NOTAS.TXT");
    if (!txt)
    {
        cout << "No existe NOTAS.TXT\n";
        return;
    }

    ifstream f("ESTUDIANTES.BIN", ios::binary);
    ofstream temp("TEMP.BIN", ios::binary);

    int carnet, paralelo;
    char materiaTxt[30];
    double n1, n2, n3;
    Estudiante e;

    while (f.read((char*)&e, sizeof(Estudiante)))
    {
        txt.clear();
        txt.seekg(0);
        bool encontrado = false;

        while (txt >> carnet)
        {
            txt.ignore(2);
            txt.getline(materiaTxt,30,';');
            txt >> paralelo;
            txt.ignore();
            txt >> n1;
            txt.ignore();
            txt >> n2;
            txt.ignore();
            txt >> n3;

            if (carnet == e.carnet && paralelo == e.paralelo && strcmp(materiaTxt, e.materia) == 0)
            {
                e.notaFinal = n1 + n2 + n3;
                e.tieneNota = true;
                encontrado = true;
            }
        }

        temp.write((char*)&e, sizeof(Estudiante));
    }

    f.close();
    temp.close();
    txt.close();

    remove("ESTUDIANTES.BIN");
    rename("TEMP.BIN", "ESTUDIANTES.BIN");
}

int main()
{
    int opc;

    do
    {
        cout << "\nMENU NOTAS UCB\n";
        cout << "1. Adicionar Estudiante\n";
        cout << "2. Listado de Estudiantes Habilitados\n";
        cout << "3. Eliminar Estudiante\n";
        cout << "4. Adicionar notas habilitacion\n";
        cout << "5. Salir\n";
        cout << "Opcion: ";
        cin >> opc;

        switch (opc)
        {
            case 1:
                adicionarEstudiante();
                break;

            case 2:
                listadoEstudiantes();
                break;

            case 3:
                eliminarEstudiante();
                break;

            case 4:
                adicionarNotas();
                break;
        }
    }
    while (opc != 5);

    return 0;
}
