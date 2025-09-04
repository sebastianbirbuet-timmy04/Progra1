#include <iostream>
using namespace std;

int add(int v1, int v2);
int mult(int val1, int val2);
int sub(int firstv, int secondv);
int dvs(int vl1, int vl2);
int mdl(int va1, int va2);

int main()
{
    int value1 = 0;
    int value2 = 0;
    char Operation = ' ';
    cout <<  "Por favor, ingresa el primer valor: ";
    cin >> value1;
    cout <<  "Por favor, ingresa el primer valor: ";
    cin >> value2;
    cout <<  "Operacion a realizar (+ - / * %) o 's' para salir: ";
    cin >> Operation; 
    switch (Operation)
    {
        case '+':
            cout << "La suma de "<< value1 << " y " << value2 << " es: " << add(value1, value2);
            break;
        case '-':
            cout << "La resta de "<< value1 << " y " << value2 << " es: " << sub(value1, value2);
            break;
        case '/':
            if (value2 == 0)
            {
                cout << "Error, no se puede dividir entre 0.";
            }
            else
            {
                cout << "La division entre " << value1 << " y " << value2 << " es: " << dvs(value1, value2);
            }
            break;
        case '*':
            cout << "La multiplicacion de " << value1 << " y " << value2 << " es " << mult(value1, value2);
            break;

        case '%':
            cout << "El modulo de " << value1 << " y " << value2 << " es " << mdl(value1, value2);
            break;
        
        case 'S':
            cout << "Gracias por usar el programa.";
            break;

        case 's':
            cout << "Gracias por usar el programa.";
            break;
        
        default:
            cout << "Error de entrada.";
    }
    return 0;
}

int add(int v1, int v2)
{
    int result =  0;
    result = v1 + v2;
    return result;
}

int mult(int val1, int val2)
{
    int result =  0;
    result = val1 * val2;
    return result;
}

int sub(int firstv, int secondv)
{
    int result = 0;
    result = firstv - secondv;
    return result;
}

int dvs(int vl1, int vl2)
{
    int result = 0;
    result = vl1 / vl2;
    return result;
}

int mdl(int va1, int va2)
{
    int result = 0;
    result = va1 % va2;
    return result;
}
