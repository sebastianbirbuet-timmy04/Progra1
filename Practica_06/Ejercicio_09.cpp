// Materia: Programación I, Paralelo 1
// Autor: Sebastián Birbuet
// Fecha creación: 08/10/2024
// Número de ejercicio: 9

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main() 
{
    string phrase;
    cout << "Ingresa una oracion: ";
    getline(cin, phrase);  

    vector<string> words;
    string word = "";

    for (int i = 0; i < phrase.size(); i++) 
    {
        if (phrase[i] == ' ') 
        {
            if (!word.empty()) 
            {
                words.push_back(word);
                word = "";
            }
        } 
        else 
        {
            word += phrase[i];
        }
    }
    if (!word.empty()) 
    {
        words.push_back(word);
    }

    cout << "\nOracion invertida:\n";
    for (int i = words.size() - 1; i >= 0; i--)
    {
        cout << words[i];
        if (i > 0) cout << " ";
    }
    cout << "\n";

    return 0;
}
