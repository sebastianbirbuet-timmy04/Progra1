#include <iostream>
using namespace std;

float calculateBMI(float weight, float height) 
{
    return weight / (height * height);
}

int main() 
{
    float weight, height;
    
    cout << "Ingresa el peso en kilogramos: ";
    cin >> weight;
    cout << "Ingresa la altura en metros: ";
    cin >> height;
    
    float bmi = calculateBMI(weight, height);
    
    cout << "El IMC es: " << bmi << endl;
    
    return 0;
}
