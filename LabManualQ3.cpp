#include <iostream>
using namespace std;

int main()
{
    float celsius, fahrenheit;
    int choice;

    cout << "1 Celsius to Fahrenheit" << endl;
    cout << "2 Fahrenheit to Celsius" << endl;
    cout << "choose any one";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter temperature in Celsius ";
        cin >> celsius;

        fahrenheit = (9.0 / 5.0) * celsius + 32;

        cout << "Temperature in Fahrenheit = " << fahrenheit;
    }
    else if (choice == 2)
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;

        celsius = float(5 / 9) * (fahrenheit - 32);

        cout << "Temperature in Celsius " << celsius;
    }
    else
    {
        cout << "wrong input";
    }

    return 0;
}