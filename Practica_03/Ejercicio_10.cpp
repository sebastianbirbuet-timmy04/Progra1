#include <iostream>

using namespace std;

double calcularTarifa (double kmRecorridos){
    double costo = 10.0;
    costo += (kmRecorridos * 2.0);
    if(kmRecorridos > 10.0){
        costo -= (costo * 0.1);
    }
    
    return costo;
}

int main()
{
    double recorrido;
    cout << "Ingrese el recorrido del viaje en taxi" << endl;
    cin >> recorrido;
    
    double costo = calcularTarifa(recorrido);
    
    cout << "El costo del viaje es de: " << costo << endl;
    
    return 0;
}