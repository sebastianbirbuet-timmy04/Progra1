#include <iostream>
using namespace std;


int isLeapYear(int year) 
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1; 
    else
        return 0; 
}


int daysInMonth(int year, int month) 
{
    switch (month) 
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if (isLeapYear(year))
                return 29;
            else
                return 28;
        default:
            return -1; 
    }
}

int main() 
{
    int year, month;
    
    cout << "Ingresa el anio: ";
    cin >> year;
    cout << "Ingresa el mes (1-12): ";
    cin >> month;
    
    int days = daysInMonth(year, month);
    
    if (days == -1)
    {
        cout << "Mes invalido." << endl;
    }
    else
    {
        cout << "El mes " << month << " del anio " << year 
             << " tiene " << days << " dias." << endl;
    }
    
    return 0;
}
