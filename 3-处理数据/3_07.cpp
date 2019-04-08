#include <iostream>

int main()
{
    using namespace std;
    const double gallon_to_litre = 3.875;
    const double km_to_mile = 0.6214;
    double fuel_consumption_europe;
    cout << "Enter fuel consumption in European style: ";
    cin >> fuel_consumption_europe;

    double fuel_consumption_us = 100 * km_to_mile / (fuel_consumption_europe / gallon_to_litre);

    cout << "Fuel consumption in US style is: " << fuel_consumption_us;

    return 0;
}
