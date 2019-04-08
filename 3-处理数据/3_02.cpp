#include <iostream>

int main()
{
    using namespace std;
    const double inch_to_meter = 0.0254;
    const double pound_to_kg = 2.2;
    int height_feet;
    int height_inch;
    double weight_in_pounds;
    cout << "Enter your height of feet part: ";
    cin >> height_feet;
    cout << "Enter your height of inch part: ";
    cin >> height_inch;
    cout << "Enter your weight_in_pounds in pounds: ";
    cin >> weight_in_pounds;

    double height = (height_feet * 12 + height_inch) * inch_to_meter;
    double weight_in_kg = weight_in_pounds / pound_to_kg;

    double BMI = weight_in_kg / (height * height);

    cout << "Your BMI is " << BMI;

    return 0;
}
