#include <iostream>

int main()
{
    using namespace std;
    float miles;
    float gallons;
    cout << "Enter the miles: ";
    cin >> miles;
    cout << "Enter the gallons: ";
    cin >> gallons;

    double fuel_consumption = miles / gallons;
    cout << "Fuel consumption is: " << fuel_consumption;

    return 0;
}
