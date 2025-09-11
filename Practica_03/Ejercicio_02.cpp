#include <iostream>
using namespace std;

float ctof (float celsius) 
{
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() 
{
    float c;
    
    cout << "Ingresa la temperatura en grados Celsius: ";
    cin >> c;
    
    cout << c << " °C equivalen a " << ctof(c) << " °F." << endl;
    
    return 0;
}
