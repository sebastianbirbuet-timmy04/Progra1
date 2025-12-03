// Materia: Programación I, Paralelo 4
// Autor: Sebastián Birbuet
// Fecha creación: 02-12-2025
// Número de ejercicio: 1

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct structEstudiante
{
    char ci[10];
    char nombres[30];
    char apellidos[30];
};

struct structNotas
{
    char ci[10];
    char materia[30];
    int nota;
};

bool EstudianteExiste(const char* ci)
{
    ifstream file("Estudiantes.bin", ios::binary);
    structEstudiante e;

    while (file.read((char*)&e, sizeof(e)))
    {
        if (strcmp(e.ci, ci) == 0)
        {
            return true;
        }
    }
    return false;
}

bool NotaExiste(const char* ci, const char* materia)
{
    ifstream file("Notas.bin", ios::binary);
    structNotas n;

    while (file.read((char*)&n, sizeof(n)))
    {
        if (strcmp(n.ci, ci) == 0 && strcmp(n.materia, materia) == 0)
        {
            return true;
        }
    }
    return false;
}

void IngresoEstudiantes()
{
    structEstudiante e;

    cout << "\n--- INGRESO DE ESTUDIANTE ---\n";
    cout << "CI: ";
    cin >> e.ci;

    if (EstudianteExiste(e.ci))
    {
        cout << "ERROR: Ya existe un estudiante con ese CI.\n";
        return;
    }

    cout << "Nombres: ";
    cin.ignore();
    cin.getline(e.nombres, 30);

    cout << "Apellidos: ";
    cin.getline(e.apellidos, 30);

    ofstream file("Estudiantes.bin", ios::binary | ios::app);
    file.write((char*)&e, sizeof(e));
    file.close();

    cout << "Estudiante registrado correctamente.\n";
}

void IngresoNotas()
{
    structNotas n;

    cout << "\n--- INGRESO DE NOTAS ---\n";
    cout << "CI del estudiante: ";
    cin >> n.ci;

    if (!EstudianteExiste(n.ci))
    {
        cout << "ERROR: No existe un estudiante con ese CI.\n";
        return;
    }

    cout << "Materia: ";
    cin.ignore();
    cin.getline(n.materia, 30);

    if (NotaExiste(n.ci, n.materia))
    {
        cout << "ERROR: Ya se registró una nota para esa materia.\n";
        return;
    }

    cout << "Nota: ";
    cin >> n.nota;

    ofstream file("Notas.bin", ios::binary | ios::app);
    file.write((char*)&n, sizeof(n));
    file.close();

    cout << "Nota registrada correctamente.\n";
}

void Reporte()
{
    ifstream eFile("Estudiantes.bin", ios::binary);
    ifstream nFile("Notas.bin", ios::binary);

    structEstudiante e;
    structNotas n;

    cout << "\n=== REPORTE DE ESTUDIANTES Y NOTAS ===\n";

    while (eFile.read((char*)&e, sizeof(e)))
    {
        cout << "\nEstudiante:\n";
        cout << "CI: " << e.ci << endl;
        cout << "Nombres: " << e.nombres << endl;
        cout << "Apellidos: " << e.apellidos << endl;
        cout << "Notas:\n";

        bool tieneNotas = false;

        nFile.clear();
        nFile.seekg(0);

        while (nFile.read((char*)&n, sizeof(n)))
        {
            if (strcmp(n.ci, e.ci) == 0)
            {
                tieneNotas = true;
                cout << "  " << n.materia << " : " << n.nota << endl;
            }
        }

        if (!tieneNotas)
        {
            cout << "  (No tiene notas registradas)\n";
        }
    }

    cout << "\n=== FIN DEL REPORTE ===\n";
}

int main()
{
    int opcion;

    do
    {
        cout << "\n========== MENU ==========\n";
        cout << "1. Ingreso de datos estudiantes\n";
        cout << "2. Ingreso de materias y notas\n";
        cout << "3. Reporte de estudiantes y notas\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
            case 1: IngresoEstudiantes(); break;
            case 2: IngresoNotas(); break;
            case 3: Reporte(); break;
            case 4: cout << "Saliendo del programa...\n"; break;
            default: cout << "Opción inválida.\n";
        }

    } while (opcion != 4);

    return 0;
}
