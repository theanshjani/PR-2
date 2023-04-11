#include <iostream.h>
#include <iomanip.h>
#include<conio.h>
void main()
{   clrscr();
    double a = 1000.0;
    double b = 100.0;
    double c = 0.393701;
    double d = 0.0833333;

    double km;
    cout << "Enter a distance in kilometers: ";
    cin >> km;

    double meters = km * a;
    double cm = meters * b;
    double inches = cm * c;
    double feet = inches * d;

    cout << setw(10) << setfill('#') << meters << " meters" << endl;
    cout << setw(10) << setfill('*') << cm << " centimeters" << endl;
    cout << setw(10) << setfill('*') << inches << " inches" << endl;
    cout << setw(10) << setfill('$') << feet << " feet" << endl;

    getch();
}