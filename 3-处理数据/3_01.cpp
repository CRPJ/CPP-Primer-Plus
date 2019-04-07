
#include <iostream>

int main()
{
    using namespace std;
    const int feet_to_inch = 12;
    int height_in_inch;     //用
    cout << "Enter your height in feet: ";
    cin >> height_in_inch;
    int height_of_feet = height_in_inch / feet_to_inch;
    int height_of_inch = height_in_inch % feet_to_inch;

    cout << "Your height is " << height_of_feet << " and "
         << height_of_inch;

    return 0;
}
