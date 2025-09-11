#include <iostream>
using namespace std;


int isPalindrome(int number) 
{
    int original = number;
    int reversed = 0;
    
    while (number > 0) 
    {
        int digit = number % 10;          
        reversed = reversed * 10 + digit; 
        number /= 10;                     
    }
    
    if (original == reversed)
        return 1; 
    else
        return 0; 
}

int main() 
{
    int num;
    cout << "Ingresa un numero: ";
    cin >> num;
    
    if (isPalindrome(num))
        cout << num << " es capicua." << endl;
    else
        cout << num << " no es capicua." << endl;
    
    return 0;
}
